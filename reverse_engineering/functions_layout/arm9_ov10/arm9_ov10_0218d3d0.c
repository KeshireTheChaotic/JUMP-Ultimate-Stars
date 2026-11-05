
void FUN_0218d3d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_1b4;
  int local_1b0;
  char *local_1ac;
  byte *local_1a8;
  int local_1a0;
  undefined1 auStack_19c [128];
  byte local_11c [256];
  int local_1c;
  
  local_1c = 0;
  if (param_3 - 1U < 2) {
    local_1b4 = (**(code **)(param_1 + 0x98))(param_3,*(undefined4 *)(param_1 + 0x10c));
  }
  else {
    local_1b4 = 1;
  }
  (**(code **)(param_1 + 0x94))(param_3,local_11c,*(undefined4 *)(param_1 + 0x10c));
  local_1b0 = 0;
  if (0 < local_1c) {
    local_1a8 = local_11c;
    local_1a0 = 0;
    do {
      local_1ac = (&PTR_DAT_021a6aa0)[*local_1a8];
      if (local_1ac == (char *)0x0) {
        local_1ac = s_unknown_021a68dc;
      }
      if (param_3 == 0) {
        FUN_0218daf8(param_2,local_1ac);
        *(undefined1 *)(param_2 + *(int *)(param_2 + 0x800) + -1) = 0x5c;
        iVar2 = *(int *)(param_2 + 0x800);
        (**(code **)(param_1 + 0x88))(*local_1a8,param_2,*(undefined4 *)(param_1 + 0x10c));
        if (iVar2 == *(int *)(param_2 + 0x800)) {
          FUN_0218daf8(param_2,&DAT_021a68e4);
        }
        *(undefined1 *)(param_2 + *(int *)(param_2 + 0x800) + -1) = 0x5c;
      }
      else {
        iVar2 = local_1a0;
        if (0 < local_1b4) {
          do {
            FUN_02003ce0(auStack_19c,&DAT_021a68e8,local_1ac,iVar2);
            FUN_0218daf8(param_2,auStack_19c);
            *(undefined1 *)(param_2 + *(int *)(param_2 + 0x800) + -1) = 0x5c;
            iVar1 = *(int *)(param_2 + 0x800);
            if (param_3 == 1) {
              (**(code **)(param_1 + 0x8c))
                        (*local_1a8,iVar2,param_2,*(undefined4 *)(param_1 + 0x10c));
            }
            else if (param_3 == 2) {
              (**(code **)(param_1 + 0x90))
                        (*local_1a8,iVar2,param_2,*(undefined4 *)(param_1 + 0x10c));
            }
            if (iVar1 == *(int *)(param_2 + 0x800)) {
              FUN_0218daf8(param_2,&DAT_021a68e4);
            }
            *(undefined1 *)(param_2 + *(int *)(param_2 + 0x800) + -1) = 0x5c;
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_1b4);
        }
      }
      local_1a8 = local_1a8 + 1;
      local_1b0 = local_1b0 + 1;
    } while (local_1b0 < local_1c);
  }
  return;
}

