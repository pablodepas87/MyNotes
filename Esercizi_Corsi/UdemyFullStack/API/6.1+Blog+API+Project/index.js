import express from "express";
import bodyParser from "body-parser";

const app = express();
const port = 4000;

// In-memory data store
let posts = [
  {
    id: 1,
    title: "The Rise of Decentralized Finance",
    content:
      "Decentralized Finance (DeFi) is an emerging and rapidly evolving field in the blockchain industry. It refers to the shift from traditional, centralized financial systems to peer-to-peer finance enabled by decentralized technologies built on Ethereum and other blockchains. With the promise of reduced dependency on the traditional banking sector, DeFi platforms offer a wide range of services, from lending and borrowing to insurance and trading.",
    author: "Alex Thompson",
    date: "2023-08-01T10:00:00Z",
  },
  {
    id: 2,
    title: "The Impact of Artificial Intelligence on Modern Businesses",
    content:
      "Artificial Intelligence (AI) is no longer a concept of the future. It's very much a part of our present, reshaping industries and enhancing the capabilities of existing systems. From automating routine tasks to offering intelligent insights, AI is proving to be a boon for businesses. With advancements in machine learning and deep learning, businesses can now address previously insurmountable problems and tap into new opportunities.",
    author: "Mia Williams",
    date: "2023-08-05T14:30:00Z",
  },
  {
    id: 3,
    title: "Sustainable Living: Tips for an Eco-Friendly Lifestyle",
    content:
      "Sustainability is more than just a buzzword; it's a way of life. As the effects of climate change become more pronounced, there's a growing realization about the need to live sustainably. From reducing waste and conserving energy to supporting eco-friendly products, there are numerous ways we can make our daily lives more environmentally friendly. This post will explore practical tips and habits that can make a significant difference.",
    author: "Samuel Green",
    date: "2023-08-10T09:15:00Z",
  },
];

let lastId = 3;

// Middleware
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

//Write your code here//

//CHALLENGE 1: GET All posts
app.get("/posts",( request, response ) => {
  // devo restituire larry di post
  response.json(posts);
})
//CHALLENGE 2: GET a specific post by id
app.get("/posts/:id",( request, response ) => {
  // step 1 : trovo il post tramite l'id
  const postToSend = posts.find((p) => p.id === parseInt(request.params.id));
  // step 2 : restituisco il post nel formato json se esiste altrimenti 404
  if(postToSend) {
    response.json(postToSend);
  } else {
    response
      .status(404)
      .json({error: "Post not found"});
  }
})
//CHALLENGE 3: POST a new post
app.post("/posts", (request,response) => {
  // step 1 : creo un nuovo post
    const newPost= {
      id: lastId +1,
      title: request.body.title,
      content:request.body.content,
      author:request.body.author,
      date: new Date()
    }
  // step 2 : aggiungo il nuovo post all'array posts
    posts.push(newPost)
  // step 3 : incremento lastId
    lastId = newPost.id
  // step 4 : restituisco il nuovo post
    response.status(201).json(newPost)
})
//CHALLENGE 4: PATCH a post when you just want to update one parameter
app.patch("/posts/:id", (request,response) => {
  // step 1: trovo il post tramite l'id 
    const postID = parseInt(request.params.id)
    const postToUpdate = posts.find((post) => post.id === postID)

    if (!postToUpdate) return res.status(404).json({ message: "Post not found" });
  // Step 2 : se il post esiste allora aggiorno i parametri
     if(request.body.title) {
        postToUpdate.title = request.body.title 
     }
     if(request.body.content) {
       postToUpdate.content = request.body.content
     }
     if(request.body.author) {
       postToUpdate.author = request.body.author 
     }
  // step 3 : restituisco il post aggiornato
    response.status(201).json(postToUpdate)
})
//CHALLENGE 5: DELETE a specific post by providing the post id.
app.delete("/posts/:id", (request,response) => {
  // step 1: trovo l'indice del post da eliminare
  const postID = parseInt(request.params.id)
  const postIndex = posts.findIndex((post) => post.id === postID)
  // step 2 : se il post non esiste restituisco 404
  if(postIndex === -1){
    response.status(404).json({error: "Post not found"})
  }
  // step 3 : elimino il post
  posts.splice(postIndex,1)
  // step 4 : restituisco un messaggio di successo
  response.json({message: "Post deleted"})

})
app.listen(port, () => {
  console.log(`API is running at http://localhost:${port}`);
});
