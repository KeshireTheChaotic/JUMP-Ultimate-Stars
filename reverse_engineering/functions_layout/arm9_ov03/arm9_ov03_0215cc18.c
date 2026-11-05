
void FUN_0215cc18(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int local_34;
  int local_30 [3];
  
  local_30[2] = param_4;
  if (param_3 < 0) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(*param_1 + 4) + 0xd8))(*(int **)(*param_1 + 4),0);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < 2);
  }
  else {
    if (param_3 < 10) {
      iVar1 = 0;
    }
    else {
      iVar1 = -4;
    }
    if (param_3 < 3) {
      iVar2 = 0x17;
    }
    else {
      param_3 = param_3 + 1;
      iVar2 = 0xd;
    }
    iVar3 = 1;
    do {
      FUN_0200d12c(param_3,10);
      local_30[iVar3] = extraout_r1;
      param_3 = FUN_0200d12c(param_3,10);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar3 = 0;
    do {
      iVar4 = local_30[iVar3];
      if ((iVar4 == 0) && (iVar3 != 1)) {
        (**(code **)(**(int **)(*param_1 + 4) + 0xd8))(*(int **)(*param_1 + 4),0);
      }
      else {
        local_34 = (param_4 + iVar1) * 0x1000;
        local_38 = param_5 << 0xc;
        FUN_0214e990(*param_1,&local_34,&local_38);
        FUN_02023894(*(undefined4 *)(*param_1 + 4),iVar2 + param_2 + iVar4,0);
        (**(code **)(**(int **)(*param_1 + 4) + 0xd8))(*(int **)(*param_1 + 4),1);
        iVar1 = iVar1 + 8;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < 2);
  }
  return;
}

