
undefined1 * FUN_020380d0(undefined1 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  bVar9 = (int)param_3 < 0;
  puVar2 = param_1;
  if (bVar9) {
    puVar2 = (undefined1 *)0x2d;
    *param_1 = 0x2d;
  }
  uVar6 = (uint)bVar9;
  if (bVar9) {
    param_3 = -param_3;
  }
  else if (param_3 == 0) {
    *param_1 = 0x30;
    param_1[1] = 0;
    return puVar2;
  }
  iVar7 = 0;
  uVar4 = 1;
  for (uVar5 = 0; uVar5 < 10; uVar5 = uVar5 + 1) {
    bVar9 = iVar7 == 0;
    if (iVar7 == 0) {
      bVar9 = uVar4 <= param_3;
    }
    if (!bVar9) break;
    uVar1 = (ulonglong)uVar4;
    uVar4 = (uint)(uVar1 * 10);
    iVar7 = iVar7 * 10 + (int)(uVar1 * 10 >> 0x20);
  }
  uVar10 = FUN_0200d0c4(uVar4,iVar7,10,0,param_4);
  for (uVar4 = 0; uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20), iVar7 = (int)uVar10,
      uVar4 < uVar5; uVar4 = uVar4 + 1) {
    iVar3 = FUN_0200d0c4(param_3,0,iVar7,uVar8,param_4);
    param_1[uVar6] = (char)iVar3 + '0';
    param_3 = param_3 - iVar3 * iVar7;
    uVar6 = uVar6 + 1;
    uVar10 = FUN_0200d0c4(iVar7,uVar8,10,0);
    if (param_2 - 1U <= uVar6) break;
  }
  param_1[uVar6] = 0;
  return param_1;
}

