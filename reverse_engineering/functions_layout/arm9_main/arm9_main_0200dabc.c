
void FUN_0200dabc(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  param_2[1] = 0;
  param_2[2] = 0;
  iVar1 = FUN_0200f57c(param_2,param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_0200da58(param_2[3],(param_2[4] - param_2[3]) / 0xc,param_1);
  if (piVar2 == (int *)0x0) {
    return;
  }
  if ((piVar2[1] & 1U) == 0) {
    piVar4 = (int *)piVar2[2];
  }
  else {
    piVar4 = piVar2 + 2;
  }
  param_2[1] = (int)piVar4;
  *param_2 = *piVar2;
  iVar1 = *piVar2;
  uVar3 = FUN_0200f59c(param_2[1]);
  uVar5 = 0;
  while( true ) {
    uVar3 = FUN_0200d9cc(uVar3,&iStack_20);
    if (iStack_20 == 0) {
      return;
    }
    uVar3 = FUN_0200d9cc(uVar3,&iStack_24);
    uVar3 = FUN_0200d9cc(uVar3,&iStack_28);
    if ((uint)(param_1 - iVar1) < uVar5 + iStack_20) break;
    uVar5 = uVar5 + iStack_20 + iStack_24;
    if ((uint)(param_1 - iVar1) <= uVar5) {
      param_2[2] = param_2[1] + iStack_28;
      return;
    }
  }
  return;
}

