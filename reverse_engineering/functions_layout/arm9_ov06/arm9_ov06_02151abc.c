
void FUN_02151abc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar1 = *(byte *)(iVar2 + 0x3a);
  iVar3 = *(byte *)(iVar2 + 0x3a) + 1;
  *(char *)(iVar2 + 0x3a) = (char)iVar3;
  if (0x19 < bVar1) {
    *(undefined1 *)(iVar2 + 0x3a) = 0;
    FUN_0207342c(0x78,0xb,iVar3,bVar1,param_4);
  }
  return;
}

