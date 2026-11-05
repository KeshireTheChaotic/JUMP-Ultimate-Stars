
/* JUS-GAME Record::Record_Deck_DataLocalChange [source-string] __FILE__="Record.cpp"
   __FUNCTION__="Record_Deck_DataLocalChange" lines=[1307, 1320] passed to 2 source-location call(s)
    */

void Record::Record_Deck_DataLocalChange
               (int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_0201a228(0x5c,0x209e61c,0x209e600,0x51b);
  FUN_02051890(param_1 + param_3 * 0x5c,uVar1,0x5c);
  FUN_02051890(param_1 + param_4 * 0x5c,param_1 + param_3 * 0x5c,0x5c);
  FUN_02051890(uVar1,param_1 + param_4 * 0x5c,0x5c);
  FUN_0201b244(uVar1);
  if (param_5 != 0) {
    uVar1 = thunk_FUN_0201a228(0x4c,0x209e61c,0x209e600,0x528);
    FUN_02051890(param_5 + param_3 * 0x4c,uVar1,0x4c);
    FUN_02051890(param_5 + param_4 * 0x4c,param_5 + param_3 * 0x4c,0x4c);
    FUN_02051890(uVar1,param_5 + param_4 * 0x4c,0x4c);
    FUN_0201b244(uVar1);
  }
  DAT_020b02ac = 1;
  return;
}

