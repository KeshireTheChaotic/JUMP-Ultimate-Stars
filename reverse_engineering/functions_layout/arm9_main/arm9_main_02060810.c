
int FUN_02060810(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int unaff_r4;
  
  if (param_1 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    if ((param_1 == (int *)0x0) || (*param_1 != 0x4e465452)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((param_1 == (int *)0x0) || (*(ushort *)((int)param_1 + 6) < 0x100)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    unaff_r4 = 0;
  }
  else {
    if (param_1 == (int *)0x0) {
      bVar1 = false;
    }
    else {
      if ((param_1 == (int *)0x0) || (*param_1 != 0x4e465452)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((param_1 == (int *)0x0) || (*(short *)((int)param_1 + 6) == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
    }
    if (bVar1) {
      unaff_r4 = 1;
    }
    else {
      FUN_02055684();
    }
  }
  FUN_02060720(param_1);
  iVar2 = FUN_0205ed1c(param_1,0x46494e46);
  if (iVar2 == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = iVar2 + 8;
  if (unaff_r4 != 0) {
    *(undefined1 *)(*param_2 + 7) = *(undefined1 *)(*param_2 + 6);
    *(undefined1 *)(*param_2 + 6) = 0;
  }
  return unaff_r4 + 1;
}

