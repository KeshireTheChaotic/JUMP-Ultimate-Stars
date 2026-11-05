
undefined * FUN_0214d7d4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [76];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (param_1 == 0) {
    FUN_0205542c(auStack_60);
    FUN_02051890(auStack_5c,&DAT_0216ad52,0x14);
    DAT_0216ad66 = 0;
    puVar1 = &DAT_0216ad52;
  }
  else {
    iVar2 = FUN_0214d51c(param_1 & 0xffff);
    if (iVar2 < 3) {
      puVar1 = (undefined *)0x0;
    }
    else {
      iVar2 = FUN_0214d63c(param_1 & 0xffff);
      uVar3 = FUN_0208a4dc(param_1);
      FUN_02051890(iVar2 + 0x16,uVar3,6);
      FUN_02051890(iVar2 + 2,&DAT_0216ad52,(uint)*(byte *)(iVar2 + 1) << 1);
      puVar1 = &DAT_0216ad52;
      *(undefined2 *)(&DAT_0216ad52 + (uint)*(byte *)(iVar2 + 1) * 2) = 0;
    }
  }
  return puVar1;
}

