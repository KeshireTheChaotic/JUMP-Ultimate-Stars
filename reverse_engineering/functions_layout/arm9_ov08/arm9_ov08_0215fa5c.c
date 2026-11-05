
void FUN_0215fa5c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int local_28;
  
  iVar3 = 0;
  iVar2 = 0;
  puVar4 = &DAT_0216abcc;
  do {
    local_28 = FUN_02161fc0(iVar3);
    if (local_28 == 0xff) {
      local_28 = 3;
    }
    else {
      uVar1 = FUN_02165fc4(0,0x11,1);
      *(undefined4 *)(DAT_0216e7b4 + iVar2 + 0x10) = uVar1;
      FUN_02165bc4(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 0x10),0xffffffff,
                   (&DAT_0216abcc)[(iVar3 + 3) * 2],(&DAT_0216abce)[(iVar3 + 3) * 2]);
      FUN_02165b80(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 0x10),0xffffffff,3);
    }
    uVar1 = FUN_02165fc4(0,(&DAT_0216aba0)[local_28],1);
    *(undefined4 *)(DAT_0216e7b4 + iVar2 + 4) = uVar1;
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 4),0xffffffff,*puVar4,puVar4[1]);
    FUN_02165b80(*(undefined4 *)(DAT_0216e7b4 + iVar2 + 4),0xffffffff,3);
    iVar2 = iVar2 + 4;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

