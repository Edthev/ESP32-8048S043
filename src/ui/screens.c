#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

// start
#include <time.h>
#include <stdlib.h>

const char *sentences[] = {
    "Happy Birthday!!!",
    "The tongue is the strongest muscle in the body. When can we wrestle?",
    "Keep shining bright!",
    "To the most stunning beautiful woman reading this I wish you the best day",
    "You are more than enough take your time with things and try to stay positive!",
    "Believe in yourself like I believe in you. You are the most capable person I've ever known",
    "You are stronger than you think",
    "I always want to be complimentary towards you so let me be the orange to your green",
    "I always want to support you, so let me be the orange to your green—your perfect complement, brightening every shade of you",
    "If you were a dinosaur you'd be a gorgesaurus",
    "Literally flowers bloom and birds sing near you how can you not know you’re beautiful",
    "Yeah like, why do birds suddenly appear every time you are near?",
    "Why do stars fall down from the sky everytime you are near",
    "hey cutiecheeks ur awesome sauce pls never explode into confetti and glitter",
    "I hate waking up with you on my mind and not in my bed",
    "When i look at the moon it reminds me of the first time i locked eyes with you",
    "I think I like you >.<",
    "Just wanted to say I miss you. Have a great day",
    "That outfit looks amazing on you! (Yes I dont even have to see it because you’re that stunning)",
    "Damn I need you to come to me ASAP. I only look best next to you",
    "I’m a loyal misser. I miss you everyday (it’s beyond that ATP)",
    "I just want to say thank you for being in my life. You’re the most special person in my life",
    "I really love talking to you btw",
    "You know I think you’re pretty cool",
    "It always feels like I timetravel when I spend time with you. I guess things go fast when I have fun.",
    "Say the word I’ll do anything for you.",
    "Oh word you hate them? Yea I hate them too",
    "Just plain and simple: I love you",
    "I have a crush on you…",
    "My lips are dry… Could really use yours",
    "Do I need a visa in order to be in your thigh-lands",
    "Olive you",
    "You're the one pho me",
    "You're tea-rific",
    "I a-peach-iate you",
    "I’m grapeful for you",
    "You're my butter half",
    "I loaf you",
    "You're the jam to my toast",
    "I love you a latte",
    "You're pawsitively perfect",
    "You're the key to my heartdrive",
    "I’ve fallen for you and I can’t get up",
    "You’ve got a pizza my heart",
    "I'm fondue you",
    "You must be made of copper and tellurium—because you’re Cu-Te",
    "You must be Wi-Fi because I’m feeling a strong connection",
    "Are you gravity? Because I’m drawn to you",
    "I’m otterly in love with you",
    "You're pawsome",
    "I whale always love you",
    "I’m not lion when I say I love you",
    "I turtle-y love you",
    "You’re purrfect for me",
    "You’re my home away from home",
    "Yes. You give me butterflies",
    "I've never known someone like you, ooh; Tangled in love, stuck by you, from the glue",
    "Don't forget to kiss me or else you'll have to miss me",
    "Why do ducks have feathers? To cover their butt-quacks!",
    "You’re such a cutie",
    "I tira-miss-u",
    "Girl…;You’re the one I want; You’re the one I need",
    "She looks just like a dream; the prettiest girl i’ve ever seen",
    "I was blind to see; That you were right in front of me",
    "I think of her so much, it drives me crazy",
    "I like it when you hold me tight; You make me feel nice",
    "You ought to know that I even miss your cute run when you fart",
    "Spent some time waiting for your face; Don't want to risk just making all the same mistakes",
    "There’s a dozen different nothings from the air when its about to snow to the bite of an apple that I’ve never appreciated until I met you. Thank you for the helping me find joy in the small things",
    "You really in ohio lol",
    "Are you a CEO because I really want to take you out",
    "How could my eyes ever wonder when I’m with someone like you",
    "Sorry for calling you dude or bro I meant it romantically",
    "BIG FRIESS BIG 2 CHEESEBURGERS, mini wrap mini burger (literally our dynamic)",
    "Tu eres un pan, y yo una ada, y juntos somonos… una empanada!",
    "Tu es la mejor persona que pude aver conocido",
    "Tu es mi pareja ideal",
    "Eres el amor de mi vida",
    "Simplemente Perfecta",
    "Words truly can’t describe the feelings I have for you",
    "Cause if we dance then\nYou don't have to speak\nAnd I know it's hard to tell\nBut I think I really like you \n- dance with me",
    "I'm waking up to the gap on my blinds peeking sunlight\nI'd do anything just to be with you\nTo sit and watch you slowly wake\nAnd I'm sorry if I'm coming home too late \n- coming home",
    "And a seat on the plane only shows that we're miles away\nSo, I promise this time I won't be late\n - coming home",
    "I'll do the dishes, we'll carry the load\nBecause we have time\nI emptied the trash like I said I would\nAnd you'd never guess what I have to say\nI'm not sorry 'cause this time I won't be late\n - coming home",
    "Couldn't list all of the reasons\nYou're everything I want\nFallin' more at every season\nYou're everything I want\n - everything i want",
    "Now I see, the weather's got me down\nBut like the sun, you'll come around\nI had finally figured out\nYou were just around the corner\nOh, such a pretty sight \n- everything i want",
    "Out of all the silly feelings\nPeople can say whatever they want\n\nCause you're everything I want\nAnd I don't need another thought \n- everything i want",
    "You are the smell of pavement after the rain\nYou are the last empty seat on a train\n - Horen Sarrison",
    "You are the song that I need for my mental state,You are the bus that stayed when I thought I was late\n - Horen Sarrison",
    "But you make me feel like all this is realBut I don't want you to feel comfortableAnd I want you to know that I'm in loveI'm in loveI'm in love - Horen Sarrison",
    "And I'm sorry I'm gone so often\nBut I know you'd do the same \n- Horen Sarrison",
    "We both like apple cider\nBut your hair be smelling like fruit punch\nAnd I don't even like you that much\nWait, I do, fuck\n - Apple Cider",
    "You said you liked my hair\nSo go ahead and touch it\nYou said you liked the jumper I wore\nSo I always wore it\nIt's really nice to talk to you\nIt's really nice to hold your hand\nIt's really nice to talk to you\nIt's really nice to hold your hand \n- Apple Cider",
    "Sometimes you have this extremely cute look/stare",
    "I know sometimes you have self image issues but when I say you are stunning or beautiful I don't mean it metaphorically or rhetorically or poetically or theoretically or any other fancy way. YOURE BEAUTIFUL. STRAIGHT UP!",
    "Miss your hair\nI like the way you stare into my eyes\nMost of the time \n- soren",
    "Smile, it's a new day!",
    "You're doing great!",
    "Believe in yourself!",
    "The world is better with you in it!"};

#define NUM_SENTENCES (sizeof(sentences) / sizeof(sentences[0]))

static time_t last_update_time = 0;
static int current_sentence_index = 0;
lv_obj_t *sentence_label = NULL;
// end

objects_t objects;
lv_obj_t *tick_value_change_obj;

void create_screen_main()
{
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 400, 40);
            lv_obj_set_size(obj, 400, 400);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_arc_rounded(obj, false, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 500, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_clip_corner(obj, true, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    // TODO randomize this
                    lv_img_set_src(obj, &img_princess);
                }
            }
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 0, 40);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 400, 400);
                    sentence_label = obj;
                    lv_label_set_text(sentence_label, sentences[current_sentence_index]);

                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
}

void tick_screen_main()
{
    time_t now = time(NULL);

    // Check if 24 hours have passed or if it's the first run
    if (difftime(now, last_update_time) >= 43200 || last_update_time == 0)
    {
        last_update_time = now;
        current_sentence_index = rand() % NUM_SENTENCES;

        if (sentence_label != NULL)
        {
            lv_label_set_text(sentence_label, sentences[current_sentence_index]);
        }
    }
}

void create_screens()
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);

    create_screen_main();
}

typedef void (*tick_screen_func_t)();

tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
};

void tick_screen(int screen_index)
{
    tick_screen_funcs[screen_index]();
}
