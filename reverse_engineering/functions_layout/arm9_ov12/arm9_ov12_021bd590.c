
void FUN_021bd590(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if (param_1[0x14] != param_2) {
    param_1[0x14] = param_2;
    uStack_10 = param_4;
    (**(code **)(**(int **)(param_1[0xf] + 4) + 0xd8))(*(int **)(param_1[0xf] + 4),0);
    local_18 = 0xc0000;
    local_14 = 0x80000;
    FUN_021bb970(param_1[0xf],&local_14,&local_18);
    (**(code **)(**(int **)(param_1[6] + 4) + 0xd8))(*(int **)(param_1[6] + 4),0);
    local_20 = 0xfff88000;
    local_1c = 0;
    FUN_021bb970(param_1[6],&local_1c,&local_20);
    (**(code **)(**(int **)(param_1[8] + 4) + 0xd8))(*(int **)(param_1[8] + 4),0);
    FUN_021bd764(param_1);
    (**(code **)(*(int *)param_1[8] + 8))();
    (**(code **)(**(int **)(param_1[1] + 4) + 0xc))();
    (*DAT_020a0e18)();
    (*DAT_020a0e18)();
    iVar1 = param_1[0x13];
    FUN_021bdbd8(param_1);
    FUN_021bda94(param_1);
    FUN_021bd730(param_1,iVar1,0);
    param_1[0x11] = -1;
    (**(code **)(**(int **)(param_1[0xe] + 4) + 0xd8))(*(int **)(param_1[0xe] + 4),0);
    (**(code **)(**(int **)(param_1[0xf] + 4) + 0xd8))(*(int **)(param_1[0xf] + 4),1);
    (**(code **)(**(int **)(param_1[6] + 4) + 0xd8))(*(int **)(param_1[6] + 4),1);
    FUN_02028384(*(undefined4 *)(*param_1 + 4),0x21bd801);
  }
  return;
}

