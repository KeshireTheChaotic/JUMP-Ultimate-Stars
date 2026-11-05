
void FUN_0218d2c4(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char local_20 [4];
  undefined1 local_1c;
  undefined1 local_1b;
  uint local_18;
  
  pcVar2 = local_20;
  local_20[0] = DAT_021a3628;
  local_20[1] = DAT_021a3629;
  local_20[2] = DAT_021a362a;
  local_20[3] = DAT_021a362b;
  local_1c = DAT_021a362c;
  local_1b = DAT_021a362d;
  bVar1 = true;
  if (param_3 < 10) {
    bVar1 = false;
  }
  else {
    iVar3 = 0;
    do {
      if (*pcVar2 != *(char *)(param_2 + iVar3)) {
        bVar1 = false;
        break;
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  if (bVar1) {
    local_18 = *(uint *)(param_2 + 6);
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))
                (local_18 << 0x18 |
                 (local_18 & 0xff00) << 8 | local_18 >> 0x18 | local_18 >> 8 & 0xff00,
                 *(undefined4 *)(param_1 + 0x10c));
      return;
    }
  }
  else if (*(code **)(param_1 + 0xa4) != (code *)0x0) {
    (**(code **)(param_1 + 0xa4))(param_2,param_3,*(undefined4 *)(param_1 + 0x10c));
  }
  return;
}

