
void FUN_0215b31c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(uint *)(param_1 + 0x308) = (uint)DAT_020afeb4;
  uStack_18 = param_4;
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x74));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x78));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x7c));
  FUN_0215aa74(param_1,1);
  FUN_0215aa74(param_1,2);
  FUN_02159e60(param_1,FUN_0215ba30 + 1);
  FUN_02159ea8(param_1,FUN_0215b8bc + 1);
  iVar2 = 0;
  iVar3 = 6;
  do {
    iVar4 = iVar2 * 4;
    uVar1 = ALWidgetImp::Create(param_1,*(undefined4 *)(param_1 + 0x68),iVar3,(&DAT_02169dc8)[iVar2]
                               );
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x13;
    *(undefined4 *)(param_1 + iVar4 + 0x94) = uVar1;
  } while (iVar2 < 6);
  iVar2 = 0;
  iVar3 = 7;
  do {
    ALWidgetImp::Create(param_1,*(undefined4 *)(param_1 + 0x6c),iVar3,(&DAT_02169dc0)[iVar2]);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x13;
  } while (iVar2 < 2);
  func_0x021b58e4(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4),0x34);
  uStack_1c = 0x40000;
  FUN_0215b3f4(*(undefined4 *)(param_1 + 0x54),&uStack_1c);
  uStack_20 = 0x1a000;
  FUN_0215b3f4(*(undefined4 *)(param_1 + 0x58),&uStack_20);
  FUN_0215b740(*(undefined4 *)(param_1 + 0x68));
  FUN_0215b740(*(undefined4 *)(param_1 + 0x6c));
  FUN_0215b598(param_1);
  return;
}

