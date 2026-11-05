
void FUN_0214ef80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_110 [256];
  undefined4 uStack_10;
  
  bVar1 = *(byte *)(param_1 + 0x23);
  iVar3 = *(int *)(param_1[0x21] + 0x38);
  uStack_10 = param_4;
  thunk_FUN_0207400c(auStack_110,s_jgalaxy__0215c054);
  uVar2 = FUN_0214e008(*(undefined1 *)(iVar3 + (uint)bVar1 * 0x40 + 0x2d));
  thunk_FUN_020741c4(auStack_110,uVar2);
  thunk_FUN_020741c4(auStack_110,s__battle_aar_0215c060);
  uVar2 = FUN_020101f4(auStack_110,0);
  *param_1 = uVar2;
  return;
}

