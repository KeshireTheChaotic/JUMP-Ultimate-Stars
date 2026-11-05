
void FUN_02016220(int *param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int local_20;
  int *piStack_1c;
  
  piStack_1c = param_4;
  uVar3 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
  iVar7 = (uVar3 >> 1) + 1;
  piVar4 = (int *)(**(code **)(*param_2 + 0xa0))();
  local_20 = *piVar4;
  while (iVar5 = FUN_02016314(&local_20,*(undefined2 *)*param_4), iVar5 != 0) {
    *param_4 = *param_4 + iVar7 * -2;
  }
  while (iVar5 = FUN_02016328(*(undefined2 *)(iVar7 * 2 + *param_4),&local_20), iVar5 != 0) {
    *param_4 = *param_4 + iVar7 * 2;
  }
  psVar6 = (short *)*param_4;
  sVar1 = psVar6[1];
  sVar2 = 0;
  if (sVar1 == 0) {
    sVar2 = psVar6[2];
  }
  if ((sVar1 != 0 || sVar2 != 0) && (local_20 == *psVar6 * 0x1000)) {
    (**(code **)(*param_1 + 0x124))(param_1,CONCAT22(psVar6[2],sVar1));
  }
  return;
}

