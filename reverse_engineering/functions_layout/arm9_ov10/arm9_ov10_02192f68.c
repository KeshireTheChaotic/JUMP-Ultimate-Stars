
undefined4 FUN_02192f68(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  bVar2 = true;
  if ((*(char *)(iVar3 + 0x73) != '\0') && (*(char *)(iVar3 + 0x73) != '\x04')) {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_020532f8(*(int *)(iVar3 + 0x68) + 0x20);
    FUN_0218f18c();
    FUN_0218f130();
    FUN_0218f360();
  }
  FUN_0218f3fc();
  *(ushort *)(iVar3 + 0x70) = *(ushort *)(iVar3 + 0x70) & 0xfff9;
  if (*(char *)(iVar3 + 0x73) == '\x02') {
    uVar1 = *(undefined4 *)(iVar3 + 0x68);
  }
  else {
    uVar1 = *(undefined4 *)(iVar3 + 100);
  }
  FUN_02191908(uVar1,0);
  uVar1 = OS_DisableInterrupts();
  FUN_021934d4(iVar3);
  FUN_021934e4(iVar3);
  OS_RestoreInterrupts(uVar1);
  *(ushort *)(iVar3 + 0x70) = *(ushort *)(iVar3 + 0x70) | 0x20;
  return 0;
}

