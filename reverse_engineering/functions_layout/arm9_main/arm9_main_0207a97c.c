
void FUN_0207a97c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="BattleProp.cpp" */
  FUN_0202f81c(*(undefined4 *)(param_2 + 4),DAT_0214bd84,&DAT_0214bd84,param_4,param_4);
  iVar2 = 7;
  do {
    if (*param_1 != 0) {
      piVar1 = *(int **)(*param_1 + 4);
      if (param_2 == 0) {
        (**(code **)(*piVar1 + 0xd4))(piVar1,0);
      }
      else {
        (**(code **)(*piVar1 + 0xd4))(piVar1,*(undefined4 *)(param_2 + 4));
      }
    }
    iVar2 = iVar2 + -1;
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xbf;
    *(byte *)((int)param_1 + 0xe) = *(byte *)((int)param_1 + 0xe) & 0x7f;
    param_1 = param_1 + 4;
  } while (0 < iVar2);
  return;
}

