c o n s t   i n t   m d   =   @ @ H E R E @ @ ;  
  
 i n l i n e   v o i d   a d d ( i n t   & a ,   i n t   b )   {  
     a   + =   b ;  
     i f   ( a   > =   m d )   a   - =   m d ;  
 }  
  
 i n l i n e   v o i d   s u b ( i n t   & a ,   i n t   b )   {  
     a   - =   b ;  
     i f   ( a   <   0 )   a   + =   m d ;  
 }  
  
 i n l i n e   i n t   m u l ( i n t   a ,   i n t   b )   {  
 # i f   ! d e f i n e d ( _ W I N 3 2 )   | |   d e f i n e d ( _ W I N 6 4 )  
     r e t u r n   ( i n t )   ( ( l o n g   l o n g )   a   *   b   %   m d ) ;  
 # e n d i f  
     u n s i g n e d   l o n g   l o n g   x   =   ( l o n g   l o n g )   a   *   b ;  
     u n s i g n e d   x h   =   ( u n s i g n e d )   ( x   > >   3 2 ) ,   x l   =   ( u n s i g n e d )   x ,   d ,   m ;  
     a s m (  
         " d i v l   % 4 ;   \ n \ t "  
         :   " = a "   ( d ) ,   " = d "   ( m )  
         :   " d "   ( x h ) ,   " a "   ( x l ) ,   " r "   ( m d )  
     ) ;  
     r e t u r n   m ;  
 }  
  
 i n l i n e   i n t   p o w e r ( i n t   a ,   l o n g   l o n g   b )   {  
     i n t   r e s   =   1 ;  
     w h i l e   ( b   >   0 )   {  
         i f   ( b   &   1 )   {  
             r e s   =   m u l ( r e s ,   a ) ;  
         }  
         a   =   m u l ( a ,   a ) ;  
         b   > > =   1 ;  
     }  
     r e t u r n   r e s ;  
 }  
  
 i n l i n e   i n t   i n v ( i n t   a )   {  
     a   % =   m d ;  
     i f   ( a   <   0 )   a   + =   m d ;  
     i n t   b   =   m d ,   u   =   0 ,   v   =   1 ;  
     w h i l e   ( a )   {  
         i n t   t   =   b   /   a ;  
         b   - =   t   *   a ;   s w a p ( a ,   b ) ;  
         u   - =   t   *   v ;   s w a p ( u ,   v ) ;  
     }  
     a s s e r t ( b   = =   1 ) ;  
     i f   ( u   <   0 )   u   + =   m d ;  
     r e t u r n   u ;  
 } 