
void FUN_021788c8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_02175628(*(undefined4 *)(param_1 + 0x10));
  FUN_02175628();
  uVar2 = FUN_02175628();
  FUN_0217718c();
  iVar3 = FUN_02176d50(uVar2);
  iVar4 = FUN_02178240(uVar2);
  if (*(char *)(iVar4 + 0x1ec) != '\0') {
    return;
  }
  if ((2 < *(byte *)(param_1 + 0x18c)) && (iVar4 = FUN_02178224(uVar2), iVar4 != 0)) {
    *(undefined1 *)(param_1 + 0x18b) = 1;
    *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xffffffef;
    return;
  }
  cVar1 = *(char *)(param_1 + 0x18c);
  switch(cVar1) {
  case '\0':
    *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xfffffff3 | 0x10;
    *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) | 1;
    *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
    break;
  case '\x01':
    if (8 < *(ushort *)(param_1 + 0x188)) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xffffffef;
      *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
      if (*(char *)(param_1 + 0x18a) == '\x02') {
        *(undefined1 *)(param_1 + 0x18b) = 1;
      }
    }
    break;
  case '\x02':
    if (*(char *)(param_1 + 0x18a) == '\x03' || *(char *)(param_1 + 0x18a) == '\x05') {
      if (*(int *)(param_1 + 0x70) + -4 < (int)(uint)*(ushort *)(param_1 + 0x188)) {
        *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 0x10;
        *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
      }
    }
    else if (*(int *)(param_1 + 0x6c) + -2 < (int)(uint)*(ushort *)(param_1 + 0x188)) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 0x10;
      *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
    }
    break;
  case '\x03':
    goto LAB_02178a74;
  case '\x04':
    goto LAB_02178a74;
  case '\x05':
    goto LAB_02178a74;
  case '\x06':
    goto LAB_02178a74;
  case '\a':
    goto LAB_02178a74;
  case '\b':
LAB_02178a74:
    *(char *)(param_1 + 0x18c) = cVar1 + '\x01';
    break;
  case '\t':
    *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xffffffef;
    *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
    if (((*(char *)(param_1 + 0x18a) + -3) * 0x1000000 >> 0x18 & 0xffU) < 2) {
      *(undefined1 *)(param_1 + 0x18b) = 1;
    }
    break;
  case '\n':
    if (*(char *)(param_1 + 0x18a) == '\x05') {
      if (*(int *)(param_1 + 0x98) + -4 < (int)(uint)*(ushort *)(param_1 + 0x188)) {
        *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 0x10;
        *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
      }
    }
    else if (*(int *)(param_1 + 0xbc) + -2 < (int)(uint)*(ushort *)(param_1 + 0x188)) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 0x10;
      *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
    }
    break;
  case '\v':
    goto LAB_02178b30;
  case '\f':
    goto LAB_02178b30;
  case '\r':
    goto LAB_02178b30;
  case '\x0e':
    goto LAB_02178b30;
  case '\x0f':
    goto LAB_02178b30;
  case '\x10':
LAB_02178b30:
    *(char *)(param_1 + 0x18c) = cVar1 + '\x01';
    break;
  case '\x11':
    *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xffffffef;
    *(char *)(param_1 + 0x18c) = *(char *)(param_1 + 0x18c) + '\x01';
    *(undefined1 *)(param_1 + 0x18b) = 1;
  }
  *(short *)(param_1 + 0x188) = *(short *)(param_1 + 0x188) + 1;
  return;
}

