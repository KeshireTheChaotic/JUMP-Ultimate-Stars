
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02154588(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_0216e68c == '\0') {
    FUN_02154750(s_char_jtNull_nsc_l_0216b09c,0x2066ce5);
    _DAT_04001010 = 0x1920000;
    uVar1 = FUN_021665f8(1,0);
    uVar2 = FUN_02157488(DAT_0216e71c,param_1,param_2,param_3);
    uVar3 = FUN_02154620();
    FUN_02166408(uVar1,DAT_0216a450,DAT_0216a452,DAT_0216a454,DAT_0216a456,2,uVar3,uVar2);
    FUN_02166370(uVar1);
    DAT_0216e68c = 1;
    return 1;
  }
  return 0;
}

