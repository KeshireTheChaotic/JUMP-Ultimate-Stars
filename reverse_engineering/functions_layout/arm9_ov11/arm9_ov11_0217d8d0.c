
void FUN_0217d8d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (&PTR_LAB_02181478)[param_2];
  piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x10);
  if (puVar3 != (undefined *)0x0) {
    FUN_0217d094();
    *(undefined4 *)(*piVar1 + 0xe4) = 0;
    FUN_02028384(*(undefined4 *)(iVar2 + 4),puVar3);
    piVar1[2] = param_2;
  }
  *(undefined1 *)(piVar1 + 3) = 0;
  return;
}

