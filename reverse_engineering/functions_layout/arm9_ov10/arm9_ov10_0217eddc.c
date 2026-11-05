
undefined4 FUN_0217eddc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_20 [12];
  
  puVar1 = (undefined4 *)FUN_0217e970(param_2);
  iVar2 = FUN_0217eea8(param_2,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined1 *)(puVar1 + 7) = 1;
  *puVar1 = param_3;
  puVar1[3] = 0;
  puVar1[5] = param_4;
  FUN_0217ebe8(auStack_20,param_1,param_4);
  FUN_0217e930(param_2,auStack_20,8,1);
  uVar3 = (uint)*(ushort *)(DAT_021a7d10 + 0x610);
  if ((int)param_4 <= (int)(uint)*(ushort *)(DAT_021a7d10 + 0x610)) {
    uVar3 = param_4;
  }
  iVar2 = FUN_0217e6cc(param_2);
  if (iVar2 < (int)uVar3) {
    return 1;
  }
  FUN_0217e930(param_2,param_3,uVar3,1);
  puVar1[3] = puVar1[3] + uVar3;
  iVar2 = puVar1[5];
  if (puVar1[3] == iVar2) {
    *(undefined1 *)(puVar1 + 7) = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    if ((*(code **)(DAT_021a7d10 + 0x600) != (code *)0x0) && (param_1 == 1)) {
      (**(code **)(DAT_021a7d10 + 0x600))(iVar2,param_2);
    }
  }
  return 1;
}

