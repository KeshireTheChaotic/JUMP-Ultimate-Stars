
void FUN_02167b88(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 uStack_7c;
  char local_7b [3];
  int local_78;
  undefined1 auStack_74 [80];
  
  iVar6 = 0;
  do {
    uVar5 = (uint)*(byte *)((int)param_1 + 6) + iVar6 & 0xff;
    if (*(byte *)((int)param_1 + 5) <= uVar5) {
      uVar5 = uVar5 - *(byte *)((int)param_1 + 5) & 0xff;
    }
    iVar8 = *(byte *)(param_1 + 1) + uVar5;
    *(undefined1 *)(param_1 + iVar8 * 2 + 3) = 0xff;
    piVar7 = param_1 + iVar8 * 2 + 3;
    iVar3 = func_0x0217830c(iVar8 * 0xc + *param_1,&uStack_7c,local_7b,auStack_74,&local_78);
    if (0 < local_78) {
      func_0x021a1ff8(auStack_74,iVar8);
    }
    if (iVar3 == 6) {
      if (*(char *)((int)param_1 + 7) == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 3;
      }
      iVar3 = func_0x021a1f34(auStack_74,uVar4);
      if (iVar3 != 0) {
        *(char *)piVar7 = (char)iVar8;
        *(char *)((int)piVar7 + 1) = local_7b[0];
        cVar1 = func_0x021a20dc(auStack_74);
        *(char *)((int)piVar7 + 2) = (cVar1 + '\x01') - local_7b[0];
        iVar3 = func_0x021a1f68(auStack_74);
        if ((iVar3 == 0) && (iVar3 = func_0x021a1f98(auStack_74), iVar3 == 0)) {
          cVar1 = '\0';
        }
        else {
          cVar1 = '\x01';
        }
        bVar2 = *(byte *)((int)piVar7 + 3);
        *(byte *)((int)piVar7 + 3) = bVar2 & 0xfd | cVar1 << 1;
        *(byte *)((int)piVar7 + 3) = bVar2 & 0xfc | cVar1 << 1;
        iVar3 = FUN_02071050(iVar8);
        piVar7[1] = iVar3;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  bVar2 = *(char *)((int)param_1 + 6) + 4;
  *(byte *)((int)param_1 + 6) = bVar2;
  if (*(byte *)((int)param_1 + 5) <= bVar2) {
    *(byte *)((int)param_1 + 6) = *(char *)((int)param_1 + 6) - *(byte *)((int)param_1 + 5);
  }
  return;
}

