#pragma once
#include <algorithm> 
#include <iostream>
#include <vector>
#include <chrono>
#include<unordered_map>
namespace DAAProject {
    using namespace std;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace std::chrono;
    using namespace System::Collections::Generic;


    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ resultLabel;
    protected:
    private: System::Windows::Forms::TextBox^ arrayTextBox;
    private: System::Windows::Forms::Button^ sortButton;
    private: System::Windows::Forms::Label^ heading;
    private: System::Windows::Forms::Button^ clearButton;
    private: System::Windows::Forms::Label^ sortingResultsLabel;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::SplitContainer^ splitContainer1;


    private: System::Windows::Forms::SplitContainer^ splitContainer2;
    private: System::Windows::Forms::TextBox^ originalArrayTextBox;
    private: System::Windows::Forms::TextBox^ sortedArrayTextBox;








    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->resultLabel = (gcnew System::Windows::Forms::Label());
            this->arrayTextBox = (gcnew System::Windows::Forms::TextBox());
            this->sortButton = (gcnew System::Windows::Forms::Button());
            this->heading = (gcnew System::Windows::Forms::Label());
            this->clearButton = (gcnew System::Windows::Forms::Button());
            this->sortingResultsLabel = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
            this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
            this->originalArrayTextBox = (gcnew System::Windows::Forms::TextBox());
            this->sortedArrayTextBox = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
            this->splitContainer1->Panel1->SuspendLayout();
            this->splitContainer1->Panel2->SuspendLayout();
            this->splitContainer1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
            this->splitContainer2->Panel1->SuspendLayout();
            this->splitContainer2->Panel2->SuspendLayout();
            this->splitContainer2->SuspendLayout();
            this->SuspendLayout();
            // 
            // resultLabel
            // 
            this->resultLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->resultLabel->AutoSize = true;
            this->resultLabel->BackColor = System::Drawing::Color::Transparent;
            this->resultLabel->ForeColor = System::Drawing::Color::LawnGreen;
            this->resultLabel->Location = System::Drawing::Point(12, 464);
            this->resultLabel->Name = L"resultLabel";
            this->resultLabel->Size = System::Drawing::Size(149, 28);
            this->resultLabel->TabIndex = 0;
            this->resultLabel->Text = L"Final Result";
            // 
            // arrayTextBox
            // 
            this->arrayTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->arrayTextBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->arrayTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->arrayTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold));
            this->arrayTextBox->ForeColor = System::Drawing::SystemColors::Info;
            this->arrayTextBox->Location = System::Drawing::Point(12, 88);
            this->arrayTextBox->Name = L"arrayTextBox";
            this->arrayTextBox->Size = System::Drawing::Size(758, 24);
            this->arrayTextBox->TabIndex = 1;
            this->arrayTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::arrayTextBox_KeyDown);
            // 
            // sortButton
            // 
            this->sortButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->sortButton->BackColor = System::Drawing::Color::Transparent;
            this->sortButton->ForeColor = System::Drawing::Color::Purple;
            this->sortButton->Location = System::Drawing::Point(41, 0);
            this->sortButton->Name = L"sortButton";
            this->sortButton->Size = System::Drawing::Size(191, 45);
            this->sortButton->TabIndex = 2;
            this->sortButton->Text = L"Find ";
            this->sortButton->UseVisualStyleBackColor = false;
            this->sortButton->Click += gcnew System::EventHandler(this, &MyForm::sortButton_Click);
            // 
            // heading
            // 
            this->heading->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->heading->AutoSize = true;
            this->heading->BackColor = System::Drawing::Color::Transparent;
            this->heading->ForeColor = System::Drawing::Color::MistyRose;
            this->heading->Location = System::Drawing::Point(12, 35);
            this->heading->Name = L"heading";
            this->heading->Size = System::Drawing::Size(652, 28);
            this->heading->TabIndex = 3;
            this->heading->Text = L"Enter the Elements of the array separated by commas.";
            // 
            // clearButton
            // 
            this->clearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->clearButton->BackColor = System::Drawing::Color::Transparent;
            this->clearButton->ForeColor = System::Drawing::Color::Purple;
            this->clearButton->Location = System::Drawing::Point(50, 0);
            this->clearButton->Name = L"clearButton";
            this->clearButton->Size = System::Drawing::Size(186, 45);
            this->clearButton->TabIndex = 4;
            this->clearButton->Text = L"Clear";
            this->clearButton->UseVisualStyleBackColor = false;
            this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
            // 
            // sortingResultsLabel
            // 
            this->sortingResultsLabel->AutoSize = true;
            this->sortingResultsLabel->BackColor = System::Drawing::Color::Transparent;
            this->sortingResultsLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->sortingResultsLabel->Font = (gcnew System::Drawing::Font(L"Anta", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->sortingResultsLabel->ForeColor = System::Drawing::Color::Aquamarine;
            this->sortingResultsLabel->Location = System::Drawing::Point(12, 207);
            this->sortingResultsLabel->Name = L"sortingResultsLabel";
            this->sortingResultsLabel->Size = System::Drawing::Size(160, 26);
            this->sortingResultsLabel->TabIndex = 5;
            this->sortingResultsLabel->Text = L"Sorting Results";
            // 
            // panel1
            // 
            this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->panel1->Location = System::Drawing::Point(12, 110);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(758, 2);
            this->panel1->TabIndex = 6;
            // 
            // splitContainer1
            // 
            this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->splitContainer1->BackColor = System::Drawing::Color::Transparent;
            this->splitContainer1->Location = System::Drawing::Point(105, 135);
            this->splitContainer1->Name = L"splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            this->splitContainer1->Panel1->Controls->Add(this->sortButton);
            this->splitContainer1->Panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            // 
            // splitContainer1.Panel2
            // 
            this->splitContainer1->Panel2->Controls->Add(this->clearButton);
            this->splitContainer1->Panel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->splitContainer1->Size = System::Drawing::Size(577, 45);
            this->splitContainer1->SplitterDistance = 274;
            this->splitContainer1->TabIndex = 7;
            // 
            // splitContainer2
            // 
            this->splitContainer2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->splitContainer2->BackColor = System::Drawing::Color::Transparent;
            this->splitContainer2->Location = System::Drawing::Point(348, 207);
            this->splitContainer2->MaximumSize = System::Drawing::Size(4000, 500);
            this->splitContainer2->Name = L"splitContainer2";
            this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
            // 
            // splitContainer2.Panel1
            // 
            this->splitContainer2->Panel1->Controls->Add(this->originalArrayTextBox);
            this->splitContainer2->Panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            // 
            // splitContainer2.Panel2
            // 
            this->splitContainer2->Panel2->Controls->Add(this->sortedArrayTextBox);
            this->splitContainer2->Panel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->splitContainer2->Size = System::Drawing::Size(392, 190);
            this->splitContainer2->SplitterDistance = 94;
            this->splitContainer2->SplitterIncrement = 2;
            this->splitContainer2->SplitterWidth = 1;
            this->splitContainer2->TabIndex = 10;
            // 
            // originalArrayTextBox
            // 
            this->originalArrayTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->originalArrayTextBox->BackColor = System::Drawing::Color::Black;
            this->originalArrayTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->originalArrayTextBox->Font = (gcnew System::Drawing::Font(L"Anta", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->originalArrayTextBox->ForeColor = System::Drawing::SystemColors::InactiveCaption;
            this->originalArrayTextBox->Location = System::Drawing::Point(3, 3);
            this->originalArrayTextBox->Multiline = true;
            this->originalArrayTextBox->Name = L"originalArrayTextBox";
            this->originalArrayTextBox->ReadOnly = true;
            this->originalArrayTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->originalArrayTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
            this->originalArrayTextBox->Size = System::Drawing::Size(386, 90);
            this->originalArrayTextBox->TabIndex = 11;
            this->originalArrayTextBox->Text = L"Original Array :";
            this->originalArrayTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::originalArrayTextBox_TextChanged);
            // 
            // sortedArrayTextBox
            // 
            this->sortedArrayTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->sortedArrayTextBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->sortedArrayTextBox->Font = (gcnew System::Drawing::Font(L"Anta", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->sortedArrayTextBox->ForeColor = System::Drawing::SystemColors::InactiveBorder;
            this->sortedArrayTextBox->Location = System::Drawing::Point(3, 1);
            this->sortedArrayTextBox->Multiline = true;
            this->sortedArrayTextBox->Name = L"sortedArrayTextBox";
            this->sortedArrayTextBox->ReadOnly = true;
            this->sortedArrayTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->sortedArrayTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
            this->sortedArrayTextBox->Size = System::Drawing::Size(386, 95);
            this->sortedArrayTextBox->TabIndex = 12;
            this->sortedArrayTextBox->Text = L"Sorted Array : ";
            // 
            // MyForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->AutoScroll = true;
            this->AutoSize = true;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(782, 536);
            this->Controls->Add(this->splitContainer2);
            this->Controls->Add(this->splitContainer1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->sortingResultsLabel);
            this->Controls->Add(this->heading);
            this->Controls->Add(this->arrayTextBox);
            this->Controls->Add(this->resultLabel);
            this->Font = (gcnew System::Drawing::Font(L"Anta", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->MinimumSize = System::Drawing::Size(800, 583);
            this->Name = L"MyForm";
            this->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"DAA Project 2 |  By 22124105  |  SUMIT SATI ";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->splitContainer1->Panel1->ResumeLayout(false);
            this->splitContainer1->Panel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
            this->splitContainer1->ResumeLayout(false);
            this->splitContainer2->Panel1->ResumeLayout(false);
            this->splitContainer2->Panel1->PerformLayout();
            this->splitContainer2->Panel2->ResumeLayout(false);
            this->splitContainer2->Panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
            this->splitContainer2->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void sortButton_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Parse the input array
        String^ input = arrayTextBox->Text;
        System::Collections::Generic::List<String^>^ tokens = gcnew System::Collections::Generic::List<String^>();
        System::String^ delim = ",";
        System::String^ inputCopy = input;
        while (inputCopy->Length > 0)
        {
            int index = inputCopy->IndexOf(delim);
            if (index < 0)
            {
                tokens->Add(inputCopy->Trim());
                break;
            }
            tokens->Add(inputCopy->Substring(0, index)->Trim());
            inputCopy = inputCopy->Substring(index + delim->Length);
        }

        vector<int> arr;
        for each (String ^ token in tokens)
        {
            arr.push_back(Convert::ToInt32(token));
        }
        // Perform sorting and measure time for each algorithm
        System::Collections::Generic::Dictionary<String^, long long>^ sortingTimes = gcnew System::Collections::Generic::Dictionary<String^, long long>();

        high_resolution_clock::time_point t1, t2;
        long long duration;
        vector<int> copyarr;
        for (int i = 0; i < arr.size(); i++) copyarr.push_back(arr[i]);
        // Bubble Sort
        t1 = high_resolution_clock::now();
        BubbleSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Bubble Sort"] = duration;
        for (int i = 0; i < arr.size(); i++) copyarr[i] = arr[i];

        // Selection Sort
        t1 = high_resolution_clock::now();
        SelectionSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Selection Sort"] = duration;
        for (int i = 0; i < arr.size(); i++) copyarr[i] = arr[i];

        // Insertion Sort
        t1 = high_resolution_clock::now();
        InsertionSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Insertion Sort"] = duration;
        for (int i = 0; i < arr.size(); i++) copyarr[i] = arr[i];

        // Merge Sort
        t1 = high_resolution_clock::now();
        MergeSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Merge Sort"] = duration;
        for (int i = 0; i < arr.size(); i++) copyarr[i] = arr[i];

        // Quick Sort
        t1 = high_resolution_clock::now();
        QuickSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Quick Sort"] = duration;
        for (int i = 0; i < arr.size(); i++) copyarr[i] = arr[i];

        // Heap Sort
        t1 = high_resolution_clock::now();
        HeapSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Heap Sort"] = duration;
        for (int i = 0; i < arr.size(); i++) copyarr[i] = arr[i];

        // Counting Sort
        t1 = high_resolution_clock::now();
        CountingSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Counting Sort"] = duration;
        for (int i = 0; i < arr.size(); i++) copyarr[i] = arr[i];

        // Radix Sort
        t1 = high_resolution_clock::now();
        RadixSort(copyarr);
        t2 = high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(t2 - t1).count();
        sortingTimes["Radix Sort"] = duration;

        // Find the sorting algorithm with the shortest time
        long long shortestTime = LLONG_MAX;
        String^ fastestAlgorithm;

        for each (KeyValuePair<String^, long long> ^ kvp in sortingTimes)
        {
            if (kvp->Value < shortestTime)
            {
                shortestTime = kvp->Value;
                fastestAlgorithm = kvp->Key;
            }
        }

        // Display the result
        resultLabel->Text = "Fastest sorting algorithm: " + fastestAlgorithm + ", Time: " + shortestTime + " nanoseconds";
        String^ sortingResults = "Sorting Results:\n";
        for each (KeyValuePair<String^, long long> ^ kvp in sortingTimes)
        {
            sortingResults += kvp->Key + ": " + kvp->Value + " nanoseconds\n";
        }

        sortingResultsLabel->Text = sortingResults;

        //originalArrayLabel->Text = "Original Array : [ ";
        originalArrayTextBox->Text = "Original Array : [ ";
        for (int i = 0; i < arr.size() - 1; i++) {
        //    originalArrayLabel->Text += arr[i] + ", ";
            originalArrayTextBox->Text += arr[i] + ", ";
        } 
        //originalArrayLabel->Text += arr.back() + " ]";
        originalArrayTextBox->Text += arr.back() + " ]";

        //sortedArrayLabel->Text = "Sorted Array : [ ";
        sortedArrayTextBox->Text = "Sorted Array : [ ";
        for (int i = 0; i < arr.size() - 1; i++) {
        //    sortedArrayLabel->Text += copyarr[i] + ", ";
            sortedArrayTextBox->Text += copyarr[i] + ", ";
        } 
        //sortedArrayLabel->Text += copyarr.back() + " ]";
        sortedArrayTextBox->Text += copyarr.back() + " ]";
    }

           // Sorting algorithms
           void BubbleSort(vector<int>& arr)
           {
               bool swapped = false;
               for (size_t i = 0; i < arr.size() - 1; i++)
               {
                   swapped = false;
                   for (size_t j = 0; j < arr.size() - i - 1; j++)
                   {
                       if (arr[j] > arr[j + 1])
                       {
                           swapped = true;
                           std::swap(arr[j], arr[j + 1]);
                       }
                   }
                   if (!swapped) break;
               }
           }

           void SelectionSort(vector<int>& arr)
           {
               for (size_t i = 0; i < arr.size() - 1; i++)
               {
                   size_t minIndex = i;
                   for (size_t j = i + 1; j < arr.size(); j++)
                   {
                       if (arr[j] < arr[minIndex])
                       {
                           minIndex = j;
                       }
                   }
                   std::swap(arr[i], arr[minIndex]);
               }
           }

           void InsertionSort(vector<int>& arr)
           {
               for (size_t i = 1; i < arr.size(); i++)
               {
                   int key = arr[i];
                   int j = i - 1;
                   while (j >= 0 && arr[j] > key)
                   {
                       arr[j + 1] = arr[j];
                       j--;
                   }
                   arr[j + 1] = key;
               }
           }

           void MergeSort(vector<int>& arr)
           {
               MergeSortUtil(arr, 0, arr.size() - 1);
           }

           void MergeSortUtil(vector<int>& arr, int l, int r)
           {
               if (l < r)
               {
                   int m = l + (r - l) / 2;
                   MergeSortUtil(arr, l, m);
                   MergeSortUtil(arr, m + 1, r);
                   Merge(arr, l, m, r);
               }
           }

           void Merge(vector<int>& arr, int l, int m, int r)
           {
               vector<int> L(arr.begin() + l, arr.begin() + m + 1);
               vector<int> R(arr.begin() + m + 1, arr.begin() + r + 1);

               size_t i = 0, j = 0, k = l;
               while (i < L.size() && j < R.size())
               {
                   if (L[i] <= R[j])
                   {
                       arr[k] = L[i];
                       i++;
                   }
                   else
                   {
                       arr[k] = R[j];
                       j++;
                   }
                   k++;
               }

               while (i < L.size())
               {
                   arr[k] = L[i];
                   i++;
                   k++;
               }

               while (j < R.size())
               {
                   arr[k] = R[j];
                   j++;
                   k++;
               }
           }

           void QuickSort(vector<int>& arr)
           {
               QuickSortUtil(arr, 0, arr.size() - 1);
           }

           void QuickSortUtil(vector<int>& arr, int low, int high)
           {
               if (low < high)
               {
                   int pi = Partition(arr, low, high);
                   QuickSortUtil(arr, low, pi - 1);
                   QuickSortUtil(arr, pi + 1, high);
               }
           }

           int Partition(vector<int>& arr, int low, int high)
           {
               int pivot = arr[high];
               int i = low - 1;
               for (int j = low; j < high; j++)
               {
                   if (arr[j] < pivot)
                   {
                       i++;
                       std::swap(arr[i], arr[j]);
                   }
               }
               std::swap(arr[i + 1], arr[high]);
               return (i + 1);
           }

           void HeapSort(vector<int>& arr)
           {
               for (int i = arr.size() / 2 - 1; i >= 0; i--)
                   Heapify(arr, arr.size(), i);

               for (int i = arr.size() - 1; i > 0; i--)
               {
                   std::swap(arr[0], arr[i]);
                   Heapify(arr, i, 0);
               }
           }

           void Heapify(vector<int>& arr, int n, int i)
           {
               int largest = i;
               int l = 2 * i + 1;
               int r = 2 * i + 2;

               if (l < n && arr[l] > arr[largest])
                   largest = l;

               if (r < n && arr[r] > arr[largest])
                   largest = r;

               if (largest != i)
               {
                   std::swap(arr[i], arr[largest]);
                   Heapify(arr, n, largest);
               }
           }

           void CountingSort(vector<int>& arr)
           {
               int max = *std::max_element(arr.begin(), arr.end());
               int min = *std::min_element(arr.begin(), arr.end());
               int range = max - min + 1;

               std::vector<int> count(range), output(arr.size());
               for (int i = 0; i < arr.size(); i++)
                   count[arr[i] - min]++;

               for (int i = 1; i < count.size(); i++)
                   count[i] += count[i - 1];

               for (int i = arr.size() - 1; i >= 0; i--)
               {
                   output[count[arr[i] - min] - 1] = arr[i];
                   count[arr[i] - min]--;
               }

               for (int i = 0; i < arr.size(); i++)
                   arr[i] = output[i];
           }

           void RadixSort(vector<int>& arr)
           {
               int max = *std::max_element(arr.begin(), arr.end());

               for (int exp = 1; max / exp > 0; exp *= 10)
                   CountingSortByDigit(arr, exp);
           }

           void CountingSortByDigit(vector<int>& arr, int exp)
           {
               std::vector<int> output(arr.size()), count(10, 0);

               for (int i = 0; i < arr.size(); i++)
                   count[(arr[i] / exp) % 10]++;

               for (int i = 1; i < 10; i++)
                   count[i] += count[i - 1];

               for (int i = arr.size() - 1; i >= 0; i--)
               {
                   output[count[(arr[i] / exp) % 10] - 1] = arr[i];
                   count[(arr[i] / exp) % 10]--;
               }

               for (int i = 0; i < arr.size(); i++)
                   arr[i] = output[i];
           }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        this->originalArrayTextBox->Text = "Original Array : ";
        this->sortedArrayTextBox->Text = "Sorted Array : ";
    }
    private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e)
    {
        this->arrayTextBox->Text=""; // Clear the input text box
        this->resultLabel->Text = "Final Result"; // Reset the result label
        this->sortingResultsLabel->Text = "Sorting Results"; // Clear the sorting results label
        this->originalArrayTextBox->Text = "Original Array : ";
        this->sortedArrayTextBox->Text = "Sorted Array : ";
    }
private: System::Void arrayTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
    if (e->KeyValue == (int)Keys::Enter) sortButton->PerformClick();
}

private: System::Void originalArrayTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
