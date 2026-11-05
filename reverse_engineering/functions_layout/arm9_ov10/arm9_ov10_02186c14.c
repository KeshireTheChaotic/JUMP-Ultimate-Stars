
undefined4 * FUN_02186c14(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  puVar1 = (undefined4 *)FUN_0217583c(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_02002488(puVar1,0,0x40);
  *puVar1 = 100;
  puVar1[1] = param_3;
  puVar1[2] = 0xffffffff;
  puVar1[3] = param_2;
  iVar2 = FUN_0200199c();
  puVar1[4] = iVar2 + 300;
  puVar1[0xf] = *(undefined4 *)(iVar4 + 0x434);
  uVar3 = FUN_02001368(0x18,0,0x2186c79);
  puVar1[0xe] = uVar3;
  *(undefined4 **)(iVar4 + 0x434) = puVar1;
  return puVar1;
}

