#ifndef REGGIE_H
#define REGGIE_H

// BNF Grammar of Regular Expressions
//
// Following the precedence rules given previously, a BNF grammar for Perl-style regular expressions can be
// constructed as follows.
//
// <RE>    ::=     <union> | <simple-RE>
// <union>     ::= <RE> "|" <simple-RE>
// <simple-RE>     ::=     <concatenation> | <basic-RE>
// <concatenation>     ::= <simple-RE> <basic-RE>
// <basic-RE>  ::= <star> | <plus> | <elementary-RE>
// <star>  ::= <elementary-RE> "*"
// <plus>  ::= <elementary-RE> "+"
// <elementary-RE>     ::= <group> | <any> | <eos> | <char> | <set>
// <group>     ::=     "(" <RE> ")"
//                         <any>   ::=     "."
//                         <eos>   ::=     "$"
//                         <char>  ::=     any non metacharacter | "\" metacharacter
// <set>   ::=     <positive-set> | <negative-set>
// <positive-set>  ::=     "[" <set-items> "]"
// <negative-set>  ::=     "[^" <set-items> "]"
// <set-items>     ::=     <set-item> | <set-item> <set-items>
// <set-items>     ::=     <range> | <char>
// <range>     ::=     <char> "-" <char>


// PERL:Search/Replace:Regular Expression:Backus Naur Form:What is
// possible BNF for regular expression?
//
// expression = term
//              term | expression
//
// term = factor
//        factor term
//
// factor = atom
//          atom metacharacter
//
// atom = character
//        .
//        ( expression )
//        [ characterclass ]
//        [ ^ characterclass ]
//        { min }
//        { min ,  }
//        { min , max }
//
// characterclass = characterrange
//                  characterrange characterclass
//
// characterrange = begincharacter
//                  begincharacter - endcharacter
//
// begincharacter = character
//
// endcharacter = character
//
// character =
//             anycharacterexceptmetacharacters
//             \ anycharacterexceptspecialcharacters
//
// metacharacter = ?
//                 * {=0 or more, greedy}
//                 *? {=0 or more, non-greedy}
//                 + {=1 or more, greedy}
//                 +? {=1 or more, non-greedy}
//                 ^ {=begin of line character}
//                 $ {=end of line character}
//                 $` {=the characters to the left of the match}
//                 $' {=the characters to the right of the match}
//                 $& {=the characters that are matched}
//                 \t {=tab character}
//                 \n {=newline character}
//                 \r {=carriage return character}
//                 \f {=form feed character}
//                 \cX {=control character CTRL-X}
//                 \N {=the characters in Nth tag (if on match side)}
//                 $N{=the characters in Nth tag (if not on match side)}
//                 \NNN {=octal code for character NNN}
//                 \b {=match a 'word' boundary}
//                 \B {=match not a 'word' boundary}
//                 \d {=a digit, [0-9]}
//                 \D {=not a digit, [^0-9]}
//                 \s {=whitespace, [ \t\n\r\f]}
//                 \S {=not a whitespace, [^ \t\n\r\f]}
//                 \w {='word' character, [a-zA-Z0-9_]}
//                 \W {=not a 'word' character, [^a-zA-Z0-9_]}
//                 \Q {=put a quote (de-meta) on characters, until \E}
//                 \U {=change characters to uppercase, until \E}
//                 \L {=change characters to uppercase, until \E}
//
// min = integer
//
// max = integer
//
// integer = digit
//           digit integer
//
// anycharacter = ! " # $ % & ' ( ) * + , - . / :
//                ; < = > ? @ [ \ ] ^ _ ` { | } ~
//                0 1 2 3 4 5 6 7 8 9
//                A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//                a b c d e f g h i j k l m n o p q r s t u v w x y z


namespace reggie {

class Pattern
{
public:
  ///
  void startsWith();

  ///
  void endsWith();
};

}

#endif
