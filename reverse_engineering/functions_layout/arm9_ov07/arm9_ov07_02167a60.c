
undefined4 FUN_02167a60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0xe) == '\x02') {
    if (*param_1 != 0) {
      func_0x021bace0();
    }
    iVar1 = FUN_02167a48(*param_1);
    if (iVar1 != 0) {
      *(undefined1 *)((int)param_1 + 0xe) = 0;
    }
  }
  if (*(char *)((int)param_1 + 0xe) == '\0') {
    *(undefined1 *)((int)param_1 + 0xe) = 1;
    if (*param_1 != 0) {
      func_0x021bac28(*param_1,param_2,0,0,0,0,0,0,param_4);
    }
  }
  if ((*(char *)((int)param_1 + 0xe) == '\x01') && (iVar1 = FUN_02167a48(*param_1), iVar1 != 0)) {
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

