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
 # e n d i f  
 u s i n g   n a m e s p a c e   s t d ;  
  
  
  
 v o i d   M A I N ( )   {  
     ; @ @ H E R E @ @  
 }  
  
 s i g n e d   m a i n ( )   {  
 # i f n d e f   L O C A L  
     s t d : : i o s _ b a s e : : s y n c _ w i t h _ s t d i o ( f a l s e ) ;  
     s t d : : c i n . e x c e p t i o n s ( s t d : : c i n . f a i l b i t ) ;  
     s t d : : c i n . t i e ( 0 ) ;  
 # e n d i f   / /   L O C A L  
     M A I N ( ) ;  
 # i f d e f   L O C A L  
     s t d : : c l o g   < <   " \ n T i m e   e l a p s e d :   "   < <   s t d : : f i x e d   < <   s t d : : s e t p r e c i s i o n ( 4 )   < <   f l o a t ( c l o c k ( ) )   /   C L O C K S _ P E R _ S E C   < <   "   s e c o n d s . " ;  
 # e n d i f   / /   L O C A L  
 }  
  
 / *  
 ( * )   N o t e :    
   -   U s e   " ( a   +   b   -   1 )   /   b "   i n s t e a d   o f   " c e i l ( a   /   b ) "  
  
 * / 