/ /   Q u a n g B u i C P  
 / /   @ @ F I L E _ N A M E @ @ . c p p  
 # i n c l u d e   " b i t s / s t d c + + . h "  
 u s i n g   n a m e s p a c e   s t d ;  
 # i f d e f   L O C A L  
 # i n c l u d e   " l o c a l / d e b u g . h p p "  
 # e l s e  
 # d e f i n e   d e b u g ( . . . )  
 # e n d i f   / /   L O C A L  
  
 s i g n e d   m a i n ( )   {  
 # i f n d e f   L O C A L  
     c i n . t i e ( n u l l p t r ) - > s y n c _ w i t h _ s t d i o ( f a l s e ) ;  
     i f   ( f o p e n ( " @ @ F I L E _ N A M E @ @ . I N P " ,   " r " ) )   {  
         f r e o p e n ( " @ @ F I L E _ N A M E @ @ . I N P " ,   " r " ,   s t d i n ) ;  
         f r e o p e n ( " @ @ F I L E _ N A M E @ @ . O U T " ,   " w " ,   s t d o u t ) ;  
     }  
 # e n d i f   / /   L O C A L  
  
     ; @ @ H E R E @ @  
  
 # i f d e f   L O C A L  
     c e r r   < <   ' \ n '   < <   c l o c k ( )   < <   " m s . " ;  
 # e n d i f   / /   L O C A L  
 } 