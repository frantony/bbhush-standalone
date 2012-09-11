#define pr_debug(fmt, arg...)   do {} while(0)
#define debug(fmt, arg...)      pr_debug(fmt, ##arg)
//int     readline        (const char *prompt, char *buf, int len);
#define panic(arg)

#define max(x, y) ({                            \
        typeof(x) _max1 = (x);                  \
        typeof(y) _max2 = (y);                  \
        (void) (&_max1 == &_max2);              \
        _max1 > _max2 ? _max1 : _max2; })

