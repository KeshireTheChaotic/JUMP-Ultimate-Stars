
int FUN_0206c7fc(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  
  iStack_1c = param_4;
  if ((param_1 < 0x210000) || (0x24ffff < param_1)) {
    iVar1 = FUN_0203b404();
    FUN_0206c498(*(undefined4 *)(iVar1 + 0x88));
    if (param_4 == 0) {
      FUN_020329d4();
      iVar2 = FUN_02011b38();
      *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = 0x31305053;
      iVar1 = iVar2;
    }
    else {
      FUN_02010adc(0,param_1);
      iVar1 = FUN_02011b38();
      iVar2 = FUN_0206c6f0(iVar1,0x31305053);
    }
    if (DAT_020afc44 != 0) {
      FUN_0206c514(iVar1);
    }
    local_2c = param_3 << 0xc;
    local_28 = param_2 << 0xc;
    FUN_0206c9f8(iVar1,&local_28,&local_2c);
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1,0);
    local_30 = 0x80000;
    FUN_0206c4d4(iVar1,&local_30);
    (**(code **)(**(int **)(iVar1 + 4) + 0xdc))(*(int **)(iVar1 + 4),0xffffffff);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),0x100);
    FUN_0206c54c();
  }
  else {
    iVar1 = FUN_0203b404();
    FUN_0206c498(*(undefined4 *)(iVar1 + 0x88));
    (**(code **)(**(int **)((&DAT_020afc54)[(((param_1 & 0xf0000) >> 0x10) - 1) * 3] + 4) + 0x18))()
    ;
    iVar2 = FUN_02011b38();
    if (DAT_020afc44 != 0) {
      FUN_0206c514();
    }
    FUN_02023924(*(undefined4 *)(iVar2 + 4),param_1,0);
    local_24 = param_3 << 0xc;
    local_20 = param_2 << 0xc;
    FUN_0206c9f8(iVar2,&local_20,&local_24);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    FUN_0206c54c();
  }
  return iVar2;
}

