#pragma once

static constexpr const ptrdiff_t RESULT_TOLERANCE = 0;
static constexpr const ptrdiff_t trialx[] = {1, 0, -1, MAXNEG, MAXPOS,
                                             MAXNEG + 1, MAXPOS - 1,
                                             0x01234567,
                                             0x89ABCDEF,
                                             -2,
                                             2,
                                             -3,
                                             3,
                                             4,
                                             5,
                                             6,
                                             7,
                                             8,
                                             9,
                                             20,
                                             11,
                                             1283,
                                             24838672,
                                             4954782,
                                             4949594,
                                             74191084, -174796958, -729418649, -2081448284, -36932286, 266648806,
                                             -1417630315, -465734602, -443847253, 1815047815, 1065154205, 844069965,
                                             -1265661335, -497279157, 805964783, -1963559793, -868099827, 1627422172,
                                             2009346094, 2035119839, -1996158327, 1050738048, 479300162, -1192554400,
                                             1832850562, -1946502827, 919034969, 1529036101, -1069115050, 22107332,
                                             1404831715, 225014975, -1747173869, -1900209043, -1853993330, 1643110652,
                                             1030949666, -689806064, -1052597833, 1171437372, 1937292534, 1380656162,
                                             1172732422, 2055003094, 1857176488, -955427217, -1778366387, -82914715,
                                             -1460804482, 718607791, -801716407, 1336277167, 528384633, 881513291,
                                             769359099, -845747362, -1292135580, 106423022, -697520411, -344986999,
                                             -1624244030, -1357825398, 424502519, -817887443, 1745292964, -1682648457,
                                             -623978049, 222409028, -1026001293, 535227425, -1706138473, 1212434948,
                                             3801527, -1500859356, -1179377473, -1986832819, -913511459, 1852201345,
                                             -837369335, 1038455064, -1151643792, 2089999080, -873062948, -808451371,
                                             -585324793, -899427573, -1226257340, 850792856, -891869861, -1756470038,
                                             -151911958, -1470971530, -2122485179, -1796064132, -1141609808, 827459308,
                                             16278506, -2122783082, -881435281, -1876215883,
                                             -64,
                                             64,
                                             -5,
                                             -31415
};
#if NARGS == 2
static constexpr ptrdiff_t trialy[] = {1, 0, -1, MAXNEG, MAXPOS, \
   MAXNEG + 1, MAXPOS - 1, 0x01234567, 0x89ABCDEF, -2, 2, -3, 3, \
   4,5,6,7,8,9,20,11,1283,24838672,4954782,4949594,74191084
,-174796958
,-729418649
,-2081448284
,-36932286
,266648806
,-1417630315
,-465734602
,-443847253
,1815047815
,1065154205
,844069965
,-1265661335
,-497279157
,805964783
,-1963559793
,-868099827
,1627422172
,2009346094
,2035119839
,-1996158327
,1050738048
,479300162
,-1192554400
,1832850562
,-1946502827
,919034969
,1529036101
,-1069115050
,22107332
,1404831715
,225014975
,-1747173869
,-1900209043
,-1853993330
,1643110652
,1030949666
,-689806064
,-1052597833
,1171437372
,1937292534
,1380656162
,1172732422
,2055003094
,1857176488
,-955427217
,-1778366387
,-82914715
,-1460804482
,718607791
,-801716407
,1336277167
,528384633
,881513291
,769359099
,-845747362
,-1292135580
,106423022
,-697520411
,-344986999
,-1624244030
,-1357825398
,424502519
,-817887443
,1745292964
,-1682648457
,-623978049
,222409028
,-1026001293
,535227425
,-1706138473
,1212434948
,3801527
,-1500859356
,-1179377473
,-1986832819
,-913511459
,1852201345
,-837369335
,1038455064
,-1151643792
,2089999080
,-873062948
,-808451371
,-585324793
,-899427573
,-1226257340
,850792856
,-891869861
,-1756470038
,-151911958
,-1470971530
,-2122485179
,-1796064132
,-1141609808
,827459308
,16278506
,-2122783082
,-881435281
,-1876215883,
   -64, 64, -5, -31415};
#endif


static constexpr ptrdiff_t NTRIALX = sizeof(trialx) / sizeof(trialx[0]);

#if NARGS == 2
static constexpr ptrdiff_t NTRIALY = sizeof(trialy)/sizeof(trialy[0]);
#endif