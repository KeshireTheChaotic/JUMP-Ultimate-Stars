
void FUN_0217ffac(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 0xa1);
  iVar2 = **(int **)(param_1 + 0x14);
  switch(cVar1) {
  case '\0':
    goto LAB_02180008;
  case '\x01':
    goto LAB_02180008;
  case '\x02':
    goto LAB_02180008;
  case '\x03':
LAB_02180008:
    *(char *)(param_1 + 0xa1) = cVar1 + '\x01';
    return;
  case '\x04':
    bVar3 = false;
    uVar4 = 0;
    do {
      if (3 < (int)uVar4) {
LAB_02180054:
        if (bVar3) {
          iVar2 = FUN_0217fe00(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x104));
          if (iVar2 == 0) {
            *(undefined1 *)(param_1 + 0xa1) = 6;
          }
          else {
            *(undefined1 *)(param_1 + 0xa1) = 5;
          }
          return;
        }
        *(undefined1 *)(param_1 + 0xa1) = 6;
        return;
      }
      if (((uVar4 != *(uint *)(param_1 + 0xd4) >> 0x1c) &&
          (iVar2 = *(int *)(param_1 + uVar4 * 4 + 0xdc), -1 < iVar2)) && (iVar2 < 0x9000)) {
        bVar3 = true;
        goto LAB_02180054;
      }
      uVar4 = uVar4 + 1;
    } while( true );
  case '\x05':
    if ((*(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10) + 0x40) & 4) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 8;
    }
    *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) | uVar4;
    *(undefined1 *)(param_1 + 0xa1) = 7;
    return;
  case '\x06':
    *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) | 1;
    *(undefined1 *)(param_1 + 0xa1) = 7;
    return;
  case '\a':
    break;
  case '\b':
    break;
  case '\t':
    break;
  case '\n':
    break;
  case '\v':
    break;
  case '\f':
    break;
  case '\r':
    *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) & 0xfffffff2;
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    return;
  case '\x0e':
    if (*(char *)(*(int *)(param_1 + 0x20) + 0x18) != '\x10') {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xa1) = 0;
    }
    return;
  default:
    return;
  }
  *(char *)(param_1 + 0xa1) = cVar1 + '\x01';
  return;
}

