
void FUN_02152ebc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar5 = uVar4 & 0xffff;
  uVar6 = (int)uVar4 >> 0x10 & 0xffff;
  func_0x021b7170();
  if (*(char *)(iVar3 + 0x439) == 3) {
    if (uVar6 == 0) {
      FUN_02154108(iVar3,1,uVar5);
      func_0x021b65cc();
      return;
    }
    uVar5 = (uVar6 - 1) * 10 + uVar5;
    uVar6 = (uint)*(char *)(iVar3 + 0x542);
    *(uint *)(iVar3 + 0x460) = uVar6 << 0x10 | uVar5 & 0xffff;
  }
  else {
    *(uint *)(iVar3 + *(char *)(iVar3 + 0x439) * 4 + 0x454) = uVar4;
  }
  iVar1 = (int)*(char *)(iVar3 + 0x439);
  switch(*(char *)(iVar3 + 0x439)) {
  case '\0':
    iVar2 = iVar3 + iVar1 * 4;
    iVar1 = (int)*(char *)(uVar6 * 0xb + iVar3 + uVar5 + 0x472);
    if (*(int *)(iVar2 + 0x43c) != iVar1) {
      *(int *)(iVar2 + 0x43c) = iVar1;
      *(undefined1 *)(iVar3 + 0x544) = 1;
      *(undefined1 *)(iVar3 + 0x545) = 1;
    }
    break;
  case '\x01':
    iVar1 = iVar3 + iVar1 * 4;
    iVar2 = uVar5 + uVar6 * 5;
    if (iVar2 != *(int *)(iVar1 + 0x43c)) {
      *(int *)(iVar1 + 0x43c) = iVar2;
      *(undefined1 *)(iVar3 + 0x544) = 1;
      *(undefined1 *)(iVar3 + 0x545) = 1;
    }
    break;
  case '\x02':
    iVar2 = iVar3 + iVar1 * 4;
    iVar1 = (int)*(char *)(iVar3 + uVar6 * 4 + uVar5 + 0x49f);
    if (*(int *)(iVar2 + 0x43c) != iVar1) {
      *(int *)(iVar2 + 0x43c) = iVar1;
      *(undefined1 *)(iVar3 + 0x544) = 1;
      *(undefined1 *)(iVar3 + 0x545) = 1;
    }
    break;
  case '\x03':
    iVar2 = uVar6 * 0x13 + iVar3;
    iVar1 = iVar3 + iVar1 * 4;
    uVar5 = (int)*(char *)(iVar2 + uVar5 + 0x4a8) | (int)*(char *)(iVar2 + 0x4b9) << 8;
    if (uVar5 != *(uint *)(iVar1 + 0x43c)) {
      *(uint *)(iVar1 + 0x43c) = uVar5;
      *(undefined1 *)(iVar3 + 0x544) = 1;
      *(undefined1 *)(iVar3 + 0x545) = 1;
    }
    break;
  case '\x04':
    goto LAB_0215303c;
  case '\x05':
LAB_0215303c:
    iVar1 = iVar3 + iVar1 * 4;
    if (uVar5 != *(uint *)(iVar1 + 0x43c)) {
      *(uint *)(iVar1 + 0x43c) = uVar5;
      *(undefined1 *)(iVar3 + 0x544) = 1;
      *(undefined1 *)(iVar3 + 0x545) = 1;
    }
  }
  FUN_02153174(iVar3);
  FUN_0207342c(0x78,0);
  return;
}

