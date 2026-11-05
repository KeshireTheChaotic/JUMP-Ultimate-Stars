
void FUN_0219d984(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = piRam0219d9c4;
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(*piVar2 + iVar1 + 0x1c30) = 0xffff;
  } while (iVar3 < 4);
  *(undefined4 *)(*piRam0219d9c4 + 0x1c38) = 0;
  return;
}

