
void FUN_0215f578(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_2c;
  int local_28;
  
  piVar3 = param_1 + 2;
  for (iVar4 = (int)*(char *)(param_1 + 0x70); iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar1 = CharaData::CharaData_Create
                      (*(undefined1 *)((int)piVar3 + 0x15),*(undefined2 *)((int)piVar3 + 0x16),
                       param_3,1,1);
    *piVar3 = iVar1;
    if (iVar1 != 0) {
      FUN_0215f364(iVar1,0);
      piVar2 = *(int **)(*(int *)(*piVar3 + 0xc) + 4);
      (**(code **)(*piVar2 + 0x94))(piVar2,piVar3[4]);
      local_28 = (uint)*(byte *)(piVar3 + 5) << 0xc;
      piVar2 = *(int **)(*(int *)(*(int *)(*piVar3 + 8) + 4) + 100);
      (**(code **)(*piVar2 + 0x10))(piVar2,&local_28);
      piVar2 = *(int **)(*(int *)(*piVar3 + 8) + 4);
      if (param_2 == 0) {
        (**(code **)(*piVar2 + 0xd4))(piVar2,0);
      }
      else {
        (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(param_2 + 4));
      }
      if ((*(byte *)(piVar3 + 6) & 1) != 0) {
        FUN_020193f0(&local_2c,*(int *)(*(int *)(*(int *)(*piVar3 + 8) + 4) + 100) + 0x14);
        FUN_02019db8(local_2c);
        iVar1 = CommonHSV::CommonHSV_Create(*(undefined4 *)(*piVar3 + 8),8);
        piVar3[1] = iVar1;
      }
      iVar1 = BattlePrmData::Battle_PrmDataInit
                        (*(undefined4 *)(&DAT_021714a4 + (uint)*(byte *)((int)piVar3 + 0x15) * 4),
                         *(undefined2 *)((int)piVar3 + 0x16));
      piVar3[3] = iVar1;
      *(int *)(*piVar3 + 0x84) = iVar1;
    }
    piVar3 = piVar3 + 7;
  }
  param_1[0x5d] = (int *)param_1[0x5f];
  *param_1 = *(undefined4 *)(*(int *)param_1[0x5f] + 8);
  return;
}

