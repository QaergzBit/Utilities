/ * *  
   *         F i l e :         @ @ F I L E _ N A M E @ @ . c p p  
   *         A u t h o r :     Q u a n g B u i C P  
   *         C r e a t e d :   @ @ D A T E T I M E @ @  
 * * /  
 # i n c l u d e   " b i t s / s t d c + + . h "  
 # i f d e f   L O C A L  
 # i n c l u d e   " l o c a l / d e b u g . h p p "  
 # e l s e  
 # d e f i n e   d e b u g ( . . . )  
 # e n d i f   / /   L O C A L  
 u s i n g   n a m e s p a c e   s t d ;  
  
 s i g n e d   m a i n ( )   {  
 # i f n d e f   L O C A L  
     i o s _ b a s e : : s y n c _ w i t h _ s t d i o ( f a l s e ) ;  
     c i n . e x c e p t i o n s ( c i n . f a i l b i t ) ;  
     c i n . t i e ( 0 ) ;  
 # e n d i f     / /   L O C A L  
  
     ; @ @ H E R E @ @  
  
     r e t u r n   0 ;  
 } 