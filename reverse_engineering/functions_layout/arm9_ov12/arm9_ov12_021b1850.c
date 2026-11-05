
void FUN_021b1850(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_18;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    local_18 = param_4;
    do {
      if ((1 << (uVar2 & 0xff) & param_1[1]) != 0) {
        local_18 = local_18 & 0xffffff00;
        uVar4 = *(undefined4 *)(param_1[3] + uVar2 * 4 + 0x48);
        piVar1 = (int *)*param_1;
        while (piVar1 != (int *)0x0) {
          iVar3 = *piVar1;
          FUN_021b1760(param_1,piVar1 + -2,uVar4,&local_18);
          piVar1 = (int *)iVar3;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x20);
  }
  return;
}

