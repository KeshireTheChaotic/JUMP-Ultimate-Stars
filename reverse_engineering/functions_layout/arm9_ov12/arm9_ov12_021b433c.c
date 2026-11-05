
/* JUS-GAME ALWidgetBase::Init [source-string] __FILE__="ALWidgetBase.cpp" __FUNCTION__="Init"
   lines=[553, 554] passed to 5 source-location call(s); header inlines: ALWidgetBaseImp.h:Create */

void ALWidgetBase::Init(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  DAT_021d5164 = FUN_02028920(0);
  iVar1 = jus_AllocDebug(0x20,s_ALWidgetBase_cpp_021d3de8,&DAT_021d3b10,0x224);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_020221f8();
    uVar2 = PropBindInstance_02095200::PropBindInstance_02095200(iVar1,uVar2);
  }
  DAT_021d5144 = uVar2;
  FUN_02023cd0(0x20204457,ALWidgetBaseImp::CreateImpFunc);
  iVar1 = jus_AllocDebug(8,s_ALWidgetBase_cpp_021d3de8,&DAT_021d3b10,0x228);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)ALWidgetBase_021d2b58::ALWidgetBase_021d2b58(iVar1,0);
  }
  iVar1 = jus_AllocDebug(0xc,s_ALWidgetBase_cpp_021d3de8,&DAT_021d3b10,0x229);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)ALWidgetBase_021d2c98::ALWidgetBase_021d2c98();
  }
  iVar1 = jus_AllocDebug(8,s_ALWidgetBase_cpp_021d3de8,&DAT_021d3b10,0x22a);
  piVar5 = (int *)0x0;
  if (iVar1 != 0) {
    piVar5 = (int *)ALWidgetBase_021d2d74::ALWidgetBase_021d2d74(iVar1,0);
  }
  FUN_021b3b7c(0,piVar3,piVar4,piVar5);
  (**(code **)(*piVar5 + 8))();
  (**(code **)(*piVar3 + 8))();
  (**(code **)(*piVar4 + 8))();
  FUN_020315e4();
  FUN_020315e4();
  iVar1 = jus_AllocDebug(0x14c,s_ALWidgetBaseImp_h_021d3d04,s_Create_021d3b60,0x2d4);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)ALWidgetBase_021d3620::ALWidgetBase_021d3620
                              (iVar1,0,0,ALWidgetBaseImp::CreateDrawFunc);
  }
  DAT_021d5140 = piVar3;
  FUN_021b5898(piVar3,0);
  (**(code **)(*DAT_021d5140 + 0xd8))(DAT_021d5140,1);
  DAT_021d5140[0x2e] = 0;
  DAT_021d515c = DAT_021d5140;
  return;
}

