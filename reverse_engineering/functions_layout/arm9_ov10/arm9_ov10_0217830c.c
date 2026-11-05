
int FUN_0217830c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r3;
  int *in_stack_00000000;
  undefined1 auStack_110 [256];
  
  iVar1 = FUN_0217836c();
  if (iVar1 == 0) {
    *in_stack_00000000 = -1;
    return 0;
  }
  uVar2 = FUN_02004b04(auStack_110);
  iVar3 = FUN_02175528(auStack_110,uVar2,0,0);
  *in_stack_00000000 = iVar3;
  if ((in_r3 == 0) || (iVar3 = *in_stack_00000000, iVar3 == -1)) {
    return iVar1;
  }
  uVar2 = FUN_02004b04(auStack_110);
  FUN_02175528(auStack_110,uVar2,in_r3,iVar3);
  return iVar1;
}

