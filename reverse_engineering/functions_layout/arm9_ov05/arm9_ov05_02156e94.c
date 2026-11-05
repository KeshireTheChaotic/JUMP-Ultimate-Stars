
undefined4 FUN_02156e94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 0x418) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x418) + 4);
    pcVar2 = *(code **)(*piVar1 + 0xd8);
    (*pcVar2)(piVar1,0,pcVar2,param_4,param_4);
  }
  return 1;
}

