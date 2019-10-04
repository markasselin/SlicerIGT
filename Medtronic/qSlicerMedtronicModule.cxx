/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Medtronic Logic includes
#include <vtkSlicerMedtronicLogic.h>

// Medtronic includes
#include "qSlicerMedtronicModule.h"
#include "qSlicerMedtronicModuleWidget.h"

//-----------------------------------------------------------------------------
#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QtPlugin>
Q_EXPORT_PLUGIN2(qSlicerMedtronicModule, qSlicerMedtronicModule);
#endif

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerMedtronicModulePrivate
{
public:
  qSlicerMedtronicModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerMedtronicModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerMedtronicModulePrivate::qSlicerMedtronicModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerMedtronicModule methods

//-----------------------------------------------------------------------------
qSlicerMedtronicModule::qSlicerMedtronicModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerMedtronicModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerMedtronicModule::~qSlicerMedtronicModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerMedtronicModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerMedtronicModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerMedtronicModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerMedtronicModule::icon() const
{
  return QIcon(":/Icons/Medtronic.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerMedtronicModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerMedtronicModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerMedtronicModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerMedtronicModule
::createWidgetRepresentation()
{
  return new qSlicerMedtronicModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerMedtronicModule::createLogic()
{
  return vtkSlicerMedtronicLogic::New();
}
