
void FUN_021571b4(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar3 + 0x6d) == '\0') {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0x70) + 0x1c);
    if ((pcVar2 != (code *)0x0) &&
       (iVar1 = (*pcVar2)(*(undefined4 *)(*(int *)(iVar3 + 0x70) + 0x10)), iVar1 == 0)) {
      FUN_02157480(iVar3);
    }
  }
  return;
}

