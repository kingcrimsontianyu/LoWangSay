#ifndef _LO_WANG_SAY_H_
#define _LO_WANG_SAY_H_

// --> C++ template metaprogramming is turing complete but preprocessor is not

#if defined(ENABLE_LO_WANG_SAY)
namespace LoWangSay
{
//------------------------------------------------------------
// Sample a random index
//------------------------------------------------------------
// The standard macro __TIME__ expands to the time of translation, a character string literal of the form "hh:mm:ss"
constexpr char timeString[] = __TIME__;
constexpr int timeInt = (timeString[0] - '0') * 100000 + (timeString[1] - '0') * 10000 +
                        (timeString[3] - '0') * 1000   + (timeString[4] - '0') * 100 +
                        (timeString[6] - '0') * 10     + (timeString[7] - '0');
constexpr int totalNumQuotes = 34; // FIX ME: this lacks flexibility !!!
constexpr int randomIdx = timeInt % totalNumQuotes;

//------------------------------------------------------------
// Choose a Lo Wang quote
//------------------------------------------------------------
template<int N>
struct FortuneCookie
{
    static constexpr int value = N;
};

// Replace x by the string literal "x"
#define STRINGIFY(x) #x

// --- __COUNTER__ is non-standard but works in gcc, clang and msvc after all
// --- The conformant approach is to implement a template-based, compile-time counter
// --- The static assert is triggered when the specialized template's static member value is equal to the random index
#define ADD_QUOTE(quoteIdx, quoteText) \
static_assert(FortuneCookie<quoteIdx>::value != randomIdx, "Quote " STRINGIFY(quoteIdx) " : " quoteText);

ADD_QUOTE(__COUNTER__, "You are not illiterate.")
ADD_QUOTE(__COUNTER__, "Confucius say it is easy to hate and difficult to love. Frankie say relax.")
ADD_QUOTE(__COUNTER__, "Thank you Lo Wang! But your fortune is in another cookie!")
ADD_QUOTE(__COUNTER__, "What's a seven-letter word for 'cryptic'?")
ADD_QUOTE(__COUNTER__, "Live each day like it's your last. Or at least today, because... Oh I don't want to spoil it.")
ADD_QUOTE(__COUNTER__, "Light travels faster than sound. That's why some people look brilliant, until you hear them speak.")
ADD_QUOTE(__COUNTER__, "Whoever coined the phrase 'quiet as a mouse' never stepped on one.")
ADD_QUOTE(__COUNTER__, "Help! I am being held prisoner in a video game factory.")
ADD_QUOTE(__COUNTER__, "Don't sweat the petty things and don't pet the sweaty things. - George Carlin")
ADD_QUOTE(__COUNTER__, "You're never too old to learn something stupid.")
ADD_QUOTE(__COUNTER__, "All men eat, but Fu Man Chu.")
ADD_QUOTE(__COUNTER__, "Some mistakes are too fun to make only once.")
ADD_QUOTE(__COUNTER__, "With sufficient thrust, pigs fly just fine.")
ADD_QUOTE(__COUNTER__, "He who takes advice from a cookie is sure to crumble.")
ADD_QUOTE(__COUNTER__, "You will stop procrastinating. Later.")
ADD_QUOTE(__COUNTER__, "Cardboard belt is a waist of paper.")
ADD_QUOTE(__COUNTER__, "The difference between an oral thermometer and a rectal thermometer is all a matter of taste.")
ADD_QUOTE(__COUNTER__, "You don't need a parachute to skydive. You need a parachute to skydive twice.")
ADD_QUOTE(__COUNTER__, "Laugh and the world laughs with you. Cry and the world laughs at you.")
ADD_QUOTE(__COUNTER__, "That's what ki said.")
ADD_QUOTE(__COUNTER__, "The good news: you're not paranoid. The bad news: everyone is actually trying to kill you.")
ADD_QUOTE(__COUNTER__, "The early bird gets the worm. The second mouse gets cheese.")
ADD_QUOTE(__COUNTER__, "Small cookies bring great joy.")
ADD_QUOTE(__COUNTER__, "Time is an illusion. Lunchtime doubly so.")
ADD_QUOTE(__COUNTER__, "To be is to do. - Socrates.\nTo do is to be. - Sarte.\nDo be do be do. - Sinatra.")
ADD_QUOTE(__COUNTER__, "It is better to have loved and lost than to have had loved and gotten syphilis.")
ADD_QUOTE(__COUNTER__, "Cookie monster wasn't here.")
ADD_QUOTE(__COUNTER__, "Chew, or chew not. There is no pie.")
ADD_QUOTE(__COUNTER__, "To maintain perfect accuracy, shoot first and call whatever you hit the target.")
ADD_QUOTE(__COUNTER__, "Information is not knowledge. Knowledge is not wisdom. Wisdom is not truth. Truth is not beauty. Beauty is not love. Love is not music. Music is the best. - FZ")
ADD_QUOTE(__COUNTER__, "Man who stand on toilet, high on pot.")
ADD_QUOTE(__COUNTER__, "It is better to have loved and lost than to have loved and got syphilis.")


} // end namespace LoWangSay
#endif // end defined(ENABLE_LO_WANG_SAY)

#endif //_LO_WANG_SAY_H_


