
void FUN_02183f3c(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    FUN_02002068(s_iconnection____NULL_021a542c,s_gpiCallback_c_021a53f8,0,0x23);
  }
  if (param_2 == 0) {
    FUN_02002068(s_result____GP_NO_ERROR_021a5440,s_gpiCallback_c_021a53f8,0,0x24);
  }
  if ((param_3 != 1) && (param_3 != 0)) {
    FUN_02002068(s__fatal____GP_FATAL______fatal____021a5458,s_gpiCallback_c_021a53f8,0,0x25);
  }
  if (param_3 == 1) {
    *(undefined4 *)(iVar4 + 0x41c) = 1;
  }
  iVar3 = *(int *)(iVar4 + 0x1a4);
  uVar1 = *(undefined4 *)(iVar4 + 0x1a8);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_0217583c(0x10);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
      piVar2[3] = param_3;
      piVar2[1] = *(int *)(iVar4 + 0x418);
      piVar2[2] = iVar4;
    }
    FUN_02183ec4(param_1,iVar3,uVar1,piVar2,0,1);
  }
  return;
}

