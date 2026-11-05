
undefined4 FUN_0214d5a8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [12];
  
  uVar1 = DAT_0216c1d4;
  FUN_0214cf04(DAT_0216c1d4,0,0x5dc);
  FUN_0214cf10(auStack_1c,param_2 + 0x10,8);
  uVar2 = FUN_0214cdb0(s_MELCO_0216af88);
  FUN_0214d0c8(auStack_1c,8,s_MELCO_0216af88,uVar2);
  FUN_0214d460(uVar1,0x3000,0,0,0,0x11,auStack_1c);
  FUN_0214d3f8(uVar1,0x18,0,param_3);
  return 0;
}

