
void FUN_021685f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = param_2 * 0x28 + param_1;
  if (*(int *)(iVar3 + 8) != 0) {
    piVar1 = *(int **)(*(int *)(iVar3 + 8) + 4);
    pcVar2 = *(code **)(*piVar1 + 0xd8);
    (*pcVar2)(piVar1,1,pcVar2,param_4,param_4);
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if (*(int *)(iVar3 + 0xc) != 0) {
      piVar1 = *(int **)(*(int *)(iVar3 + 0xc) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
  }
  *(undefined1 *)(iVar3 + 0x26) = 0;
  return;
}

