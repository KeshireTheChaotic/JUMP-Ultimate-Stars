
bool FUN_021610f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  iVar1 = FUN_02160040();
  if (iVar1 == 0) {
    FUN_021618ec(*param_2,s_child_recv_0216a6bc);
    if ((*param_2 == 0) || ((short)param_2[1] == 0)) {
      return false;
    }
    FUN_02161468(*param_2,iVar2 + 0x214);
    if (*(short *)(iVar2 + 0x214) == -3) {
      *(undefined4 *)(iVar2 + 0x58c) = 0;
      return true;
    }
    if (*(int *)(iVar2 + 4) == 1) {
      if (*(ushort *)(param_2 + 1) < 0x200) {
        return false;
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (((int)(uint)*(ushort *)(iVar2 + 0x216) < *(int *)(iVar2 + 0x424)) &&
           (iVar1 = FUN_02161380(param_1), iVar1 == 1)) {
          FUN_021612ec(param_1,iVar2 + 0x214,iVar2);
        }
      }
      else {
        if (*(short *)(iVar2 + 0x214) == -1) {
          *(undefined4 *)(iVar2 + 8) = 1;
        }
        if (*(int *)(iVar2 + 8) == 1) {
          *(undefined4 *)(iVar2 + 4) = 0;
          return true;
        }
      }
    }
    return false;
  }
  FUN_021618ec(*param_2,s_parent_recv_0216a6b0);
  if ((*param_2 == 0) || ((short)param_2[1] == 0)) {
    return false;
  }
  FUN_02161468(*param_2,iVar2 + 0x214);
  if (*(short *)(iVar2 + 0x214) == -3) {
    *(undefined4 *)(iVar2 + 0x58c) = 0;
    return true;
  }
  if (*(int *)(iVar2 + 4) == 1) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      if (((int)(uint)*(ushort *)(iVar2 + 0x216) < *(int *)(iVar2 + 0x424)) &&
         (iVar1 = FUN_02161380(param_1), iVar1 == 1)) {
        FUN_021612ec(param_1,iVar2 + 0x214,iVar2);
      }
    }
    else {
      if (*(short *)(iVar2 + 0x214) == -1) {
        *(undefined4 *)(iVar2 + 8) = 1;
      }
      if (*(int *)(iVar2 + 8) == 1) {
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar1 < 6) {
          *(int *)(iVar2 + 0x10) = iVar1 + 1;
        }
        else {
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        return iVar1 >= 6;
      }
    }
  }
  return false;
}

