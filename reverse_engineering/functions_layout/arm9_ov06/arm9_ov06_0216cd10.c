
void FUN_0216cd10(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  
  iVar2 = param_2[1];
  if (*param_2 != 0) {
    piVar1 = (int *)FUN_0216b740();
    local_20 = *piVar1 - param_2[5];
    local_1c = piVar1[1] - param_2[6];
    FUN_02166a1c(param_2 + 5);
  }
  uVar3 = 0;
  do {
    if ((*(byte *)(iVar2 + 6) & 1) != 0) {
      FUN_0216c958(param_1,iVar2,param_2,&local_20);
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 8;
  } while (uVar3 < 0x20);
  return;
}

