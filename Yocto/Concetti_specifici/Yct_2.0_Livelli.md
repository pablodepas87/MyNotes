# Livelli

I layer sono repository che contengono metadati correlati (cioè set di istruzioni) che dicono al sistema di build OpenEmbedded come costruire un target. 
Lo Yocto Project Layer Model facilita la collaborazione, la condivisione, la personalizzazione e il riutilizzo all'interno dell'ambiente di sviluppo del progetto Yocto. 

I livelli separano logicamente le informazioni per il tuo progetto. 

Ad esempio, puoi utilizzare un livello per contenere tutte le configurazioni per un particolare componente hardware. 

L'isolamento delle configurazioni specifiche dell'hardware consente di condividere altri metadati utilizzando un livello diverso in cui tali metadati potrebbero essere comuni tra diversi componenti hardware.

Ci sono molti livelli che lavorano nell'ambiente di sviluppo del progetto Yocto. Lo [Yocto Project Compatible Layer Index](https://docs-yoctoproject-org.translate.goog/current/dev-manual/common-tasks.html?_x_tr_sl=auto&_x_tr_tl=it&_x_tr_hl=it&_x_tr_pto=wapp#understanding-and-creating-layers) e l'[OpenEmbedded Layer Index](https://translate.google.com/website?sl=auto&tl=it&hl=it&client=webapp&u=https://layers.openembedded.org) contengono entrambi layer da cui è possibile utilizzare o sfruttare.

Per convenzione, i livelli nel progetto Yocto seguono una forma specifica. La conformità a una struttura nota consente a BitBake di fare ipotesi durante le build su dove trovare i tipi di metadati. 

