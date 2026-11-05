
void FUN_0216b220(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = param_1;
  while (iVar3 != 0) {
    pcVar2 = *(char **)(iVar3 + 0x10);
    if (pcVar2 != (char *)0x0) {
      iVar1 = (int)*pcVar2;
    }
    if (pcVar2 != (char *)0x0 && iVar1 != 0) {
      *pcVar2 = (char)iVar1 + -1;
    }
    (*(code *)(&PTR_FUN_021727f8)[*(byte *)(iVar3 + 0x1a)])(iVar3);
    FUN_02037c24(param_1 + 8,iVar3);
    FUN_020517fc(iVar3,0,0x6c);
    iVar1 = FUN_02037b98(param_1 + 0x10,iVar3);
    iVar3 = *(int *)(param_1 + 8);
  }
  return;
}

