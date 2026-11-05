
int FUN_02199b8c(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  iVar1 = FUN_02198c00();
  OS_DisableInterrupts();
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x2260) == 9)) && (*(char *)(iVar1 + 0x226b) == '\0')) {
    iVar3 = iVar1 + 0x214c;
    uVar2 = *(undefined2 *)(iVar1 + 0x214a);
  }
  OS_RestoreInterrupts();
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = uVar2;
  }
  return iVar3;
}

