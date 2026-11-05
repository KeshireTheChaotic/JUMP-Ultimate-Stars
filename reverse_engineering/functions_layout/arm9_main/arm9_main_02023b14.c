
void FUN_02023b14(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  for (uVar3 = 0; uVar2 = (**(code **)(*param_1 + 0xac))(), uVar3 < uVar2; uVar3 = uVar3 + 1) {
    iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar3);
    iVar1 = *(int *)(iVar1 + 100);
    FUN_02015008(iVar1,*param_5 != 0x1000);
    local_2c = *param_4;
    local_30 = *param_3;
    local_34 = *param_2;
    local_28 = *param_5;
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x18))
              ((int *)(iVar1 + 0x14),&local_34,&local_30,&local_2c,&local_28);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  return;
}

