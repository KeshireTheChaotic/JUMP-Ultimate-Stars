
int FUN_02186bdc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int local_14 [2];
  
  iVar1 = FUN_0218668c(param_1,2,0,local_14,0,0,0);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_02185264(param_1,param_2[3],*(undefined4 *)(local_14[0] + 0x18)), iVar1 == 0)) {
    *param_2 = 0x65;
    iVar1 = 0;
  }
  return iVar1;
}

